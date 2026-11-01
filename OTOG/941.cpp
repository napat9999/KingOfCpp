#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m; cin >> n >> m;
    vector<int> a(n);
    for (int &c : a) cin >> c;
    sort(a.rbegin(),a.rend());

    vector<int> b(n+1,0);
    for (int i = 0; i < n; i++) b[i+1] = a[i] + b[i];
    while (m--) {
        int x; cin >> x;
        if (x > b[n]) cout << "NO\n";
        else cout << lower_bound(b.begin(),b.end(),x) - b.begin() << "\n"; 
    }
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<int> a(n),b(n),c(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }
    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());

    for (int i = 0; i < n; i++) {
        c[i] = min(a[i],b[i]);
    }
    cout << *max_element(c.begin(),c.end());
}
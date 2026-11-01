#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,q; cin >> n >> q;
    vector<int> s(n+2,0),a(n);
    for (int i = 1; i <= n; i++) {
        cin >> s[i];
    }
    for (int i = 1; i <= n; i++) {
        a[i-1] = s[i-1] + s[i] + s[i+1];
    }
    sort(a.begin(),a.end());
    while (q--) {
        int l,r; cin >> l >> r;
        cout << (upper_bound(a.begin(),a.end(),r) - lower_bound(a.begin(),a.end(),l)) << '\n';
    }
}
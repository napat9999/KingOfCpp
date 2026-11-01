#include<bits/stdc++.h>
using namespace std;
#define nl cout << "\n";

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,x,m;
    cin >> n >> x >> m;
    valarray<int> s(n);
    for (int i=0; i < n; i++ ) cin >> s[i];
    if (m==1) {
        int cnt = count(begin(s), end(s), x);
        cout << cnt;
    } else if (m==2) {
        int idx = -1;
        for (int i = n-1; i >= 0; i--) {
            if (s[i]== x) {
                idx = i;
                break;
            }
        }
        cout << idx;
    } else if (m==3) {
        auto mx = s.max();
        auto imx = find(begin(s),end(s),mx)-begin(s);
        cout << mx << " " <<imx;
    }
}
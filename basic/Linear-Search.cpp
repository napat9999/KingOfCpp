#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n, target, M;
    cin >> n >> target >> M;

    if (M == 1) {
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (x==target) {
                cout << i;
                return 0;
            }
        }
        cout << -1;
    } else if (M == 2) {
        int best=1e18,ans=0;
        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;
            if (abs(target-x)<best) {
                best = abs(target-x);
                ans = x;
            }
        }
        cout << ans;
    }
}
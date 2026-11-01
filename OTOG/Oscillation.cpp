
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n,t,k;
    cin >> n >> t >> k;
    vector<pair<int,int>> s(n);
    for (int i = 0; i < n; i++) {
        int a,b;
        cin >> a >> b;
        if (t % 2 == 1) a= 3-a;
        if (b > 0 && a == 1){
            s[i] = make_pair(a,b);
        } else if (b < 0 && a == 2){
            s[i] = make_pair(a,-b);
        } else {
            s[i] = make_pair(a,0);
        }

    }
    int idx = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        cnt += s[i].second;
        if (s[i].second >= k){
            idx++;
        }

    }
    cout << idx << " " << cnt;


}



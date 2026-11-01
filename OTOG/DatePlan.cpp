#include<bits/stdc++.h>
using namespace std;
#define int long long

const int MOD = 1000000007;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    string m;
    cin >>m;

    vector<int> f(m.size()+1);
    f[0] = 1;
    f[1] = 2;
    for (int i = 2; i < (int)f.size(); i++) {
        f[i] = (f[i-1] + f[i-2]) % MOD;
    }

        int ans = 1;
        int cnt = 0;
        for (int i = 0; i < (int)m.size(); i++) {
            if (m[i] == '.') {
                cnt++;
            } else {
                ans = ans * f[cnt] % MOD;
                cnt = 0;
            }
        }
        ans *= f[cnt] % MOD;   
        cout << ans % MOD;
}

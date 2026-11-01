#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    int sum = 0;
    cin >> n;
    vector<int> s(n);
    for (int i = 0; i <= n; i++) {            
        cin >> s[i];
        sum += s[i];
    }

    int ans = sum / 2;
    if (sum % 2 == 0) {
        int x = 0;
        for (int i = 0; i < n+1; i++) {
            x += s[i];
            if (x == ans) {
                cout << i+1 << "\n" << x;
                return 0;
            }
        }
        cout << -1;
    }
}
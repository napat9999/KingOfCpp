#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    for (int i = n; ; i++) {
        string s = to_string(i);
        string r =s;
        reverse(r.begin(),r.end());
        if (s != r || i < 2) continue;

        bool prime = true;
        for (int d = 2; d * d <=i; d++) {
            if (i % d ==0 ) {
                prime = false;
                break;
            }
        }
        if (prime) {
            cout << i;
            return 0;
        }
        
    }
}
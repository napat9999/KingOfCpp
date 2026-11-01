#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    string res = "";
    for (int i = 2; i *i <= n; i++) {
        while ( n % i == 0) {
            if (res != "") res += "*";
            res += to_string(i);
            n /= i;
        }
    }

    if (n > 1) {
        if (res != "") res += "*";
        res += to_string(n);
    }
    cout << res ;
}
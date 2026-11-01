#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n = 0;
    int ss = 1;
    cin >> n;

    while (ss <= n) {
        for (int i = 0; i < ss; i++) {
            cout << "*";
        }
        nl
        ss += 1;
    }
    
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    double x,sum=0,mx= -1e18,mn=1e18,ct=0;


    while (cin >> x) {
        if (x == -99){
            break;
        } else {
            sum += x;
        if (x > mx) mx = x;
        if (x < mn) mn = x;
        ct += 1;
        }
    }


    cout << fixed << setprecision(2) << (double)sum/ct; nl

    cout << fixed << setprecision(2) << mx; nl
    cout << fixed << setprecision(2) << mn; nl
}
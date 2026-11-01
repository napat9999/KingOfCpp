#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll weight =0, height=0;
    double MBI = 0;
    cin >> weight;
    cin >> height;

    MBI += weight/pow(((double)height/100) ,2);

    if (weight > 0 && height > 0) {
        

        if (MBI < 18.5) {
            cout << fixed << setprecision(2) << MBI <<" thin" ;
        } else if (18.5 <= MBI && MBI <= 22.9) {
            cout << fixed << setprecision(2) << MBI <<" slim";
        } else if (MBI > 22.9) {
            cout << fixed << setprecision(2) << MBI <<" fat";
        }
    }
}
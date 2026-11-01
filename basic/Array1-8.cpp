#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    valarray<double> S(5);
    double sum =0;
    int ct = 0;
    for (ll i =0; i < 5 ; i++) {
        cin >> S[i];
    }
    sum = S.sum();

    cout << fixed << setprecision(1) << sum/5; nl

    for (ll i =0; i<5; i++) {
        if (S[i] < sum/5) {
            ct += 1;
        }
    }
    cout << ct;
}
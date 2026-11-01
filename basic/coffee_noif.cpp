#include<bits/stdc++.h>
using namespace std;
using ll =long long;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll P =0,N =0,D =0;
    cin >> P >> N >> D;

    ll price =0,ct =0;
    double cut = 0;
    price = P*N;
    cut = ((double)(price*D)/(double)100);

    ct = 0;
    while (ct < (price-cut)) {
        ct += 100;
    }
    cout << fixed << setprecision(2);
    cout << price <<"\n" << cut <<"\n" << price-cut << "\n" << ct/100 << "\n" << ct-(price-cut) ;
}
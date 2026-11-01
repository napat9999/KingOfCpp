#include<bits/stdc++.h>
using namespace std;
using ll =long long;
using pll = pair<ll,ll>;
#define nl cout << "\n";

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll A=0,D=0,L=0,N=1,S=0;
    cin >> A >> D >> L;

    if (L != A) {
        N += (L-A)/D;
    } 
    S += (L+A)*N/2;

    cout << N << "\n" << S;
}



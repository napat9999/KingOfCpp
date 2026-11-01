#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll A=0,N=0,S=0,D=0,last=0;
    cin >> A >> N >> S;

    last = ((S*2)/N)-A;
    D = (last-A)/(N-1);
    cout << D << "\n" << last;

}
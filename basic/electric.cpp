#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll N =0;
    cin >> N;   
    ll price=0;
    if(N <= 100) price = N * 3;
    else if(N <= 300) price = 300 + (N - 100) * 4;
    else if(N <= 600) price = 300 + 800 + (N - 300) * 5;
    else price = 300 + 800 + 1500 + (N - 600) * 7;
    cout << price;
    nl

}
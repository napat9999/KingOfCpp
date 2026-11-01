#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    valarray<ll> S(10);

    for (ll i =0; i<10; i++) cin >> S[i];
    sort(begin(S), end(S));

    for (ll i=0; i<10; i++) cout << S[i] << " ";
}
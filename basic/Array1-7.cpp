#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    vector<ll> S(5);
    for (ll i =0; i<5; i++) cin >> S[i];
    for (ll i =4; i >= 0;i--) {
        cout << S[i] << " ";
    }
}
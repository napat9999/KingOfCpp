#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll N=0;
    ll M=0;
    cin >> N ;
    vector<vector<ll>> S(N);
    
    for (ll i = 0; i<N; i++) {
        cin >> M;
        S[i].resize(M);
        for (ll j=0; j<M; j++) cin >> S[i][j];
        
    }

    for (ll i =0; i<N; i++) {
        if (is_sorted(begin(S[i]),end(S[i])) || is_sorted(rbegin(S[i]), rend(S[i]))) {
            cout << "Yes"; nl
        } else {
            cout << "No"; nl
        }
    }
}
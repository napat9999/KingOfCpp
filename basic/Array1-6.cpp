#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    vector<string> S(5);
    ll N = 0;
    for (int i =0; i <5; i++) {
        cin >> S[i];
        cout << S[i].size() << " ";
        N += S[i].size();
    }   
    cout << "\n" << N;
}
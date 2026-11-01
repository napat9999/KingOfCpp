#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n=0,k=0;
    cin >>n >> k;
    vector<int> S(n+1,0);
    vector<int> drop;

    for (int i =1; i<=n ; i++) {
        S[i] = i;
    } // 5 4 = 0,1,2,3,4,5 = 4 3 2 1 = 5

    ll p = 0;
    for (int i =0; i<n; i++) {
        if (drop.size() < n-1) {
            p = (p+k-1)%(S.size()-1);  
            drop.push_back(S[p+1]); 
            k = S[p+1];
            S.erase(S.begin()+p+1);
        } else {
            cout << S[1] ;
        }
    }
}
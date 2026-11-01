#include<bits/stdc++.h>
using namespace std;
using ll =long long;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N =0;
    cin >>N;
    valarray<ll> S(N);
    for (int i =0; i<N; i++) {
        cin >> S[i];
    }
    cout << S.max() << " ";
    cout << S.min() << " ";
    cout << fixed << setprecision(2) <<(double)S.sum()/N;

}
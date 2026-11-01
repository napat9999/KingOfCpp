#include<bits/stdc++.h>
using namespace std;
using ll =long long;
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll N = 0;
    cin >> N;

    bool prime = N > 1;
    for (ll i = 2; i * i <= N && prime; i++) {
        if (N % i == 0) {
            prime = false;
        }
    }

    if (prime) {
        cout << "Prime";
    } else {
        cout << "Not Prime";
    }
}

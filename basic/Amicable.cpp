#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll a=0,b=0;
    cin >> a >> b;

    ll sa = (a > 1) ? 1 : 0;
    for (ll i = 2; i * i <= a; i++) {
        if (a % i == 0) {
            sa += i;
            if (i != a / i) sa += a / i;
        }
    }

    ll sb = (b > 1) ? 1 : 0;
    for (ll i = 2; i * i <= b; i++) {
        if (b % i == 0) {
            sb += i;
            if (i != b / i) sb += b / i;
        }
    }

    if (a != b && sa == b && sb == a) {
        cout << "Amicable numbers";
    } else {
        cout << "NOT amicable numbers";
    }
} 

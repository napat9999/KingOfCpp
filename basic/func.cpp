#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

ll last(ll a,ll b,ll n) {
    ll ct=0;
    for (ll i =a; i <= b; i++){
        if (i%10 == n) {
            ct += 1;
        }
    }
    return ct;
}

double mean(ll S) {
    valarray<ll> M(S);
    for (ll i =0; i< S;i++) {
        cin >> M[i];
    }
    return (double)M.sum()/S;
}

ll val(string n) {
    ll val = 0,base = 1;
    for (ll i = n.length()-1; i >=0;i--) {
        if (n[i] == '1') {
            val += base;
        }
        base *= 2;
    }
    return val;

}

ll h(ll a,ll b) {
    return __gcd(a,b);
}

ll k(ll a,ll b) {
    return a / __gcd(a,b) * b;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll a=0,b=0,n=0,S=0;
    string M="";
    cin >> a >> b >> n;
    cin >> S;
    double avg = mean(S);
    cin >> M;

    cout << last(a,b,n); nl
    cout << avg; nl
    cout << val(M); nl
    cout << h(a,b); nl
    cout << k(a,b); 
}

// 1 20 3
// 5
// 10 20 30 40 50
// 1011
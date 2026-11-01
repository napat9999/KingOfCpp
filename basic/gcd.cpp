#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll A=0,B=0,r=1,GCD=0;
    cin >> A >> B;

    GCD = __gcd(llabs(A),llabs(B));
    if (GCD == 0) {
        cout << "indeterminate";

    } else {
        cout << GCD;
    }   
}
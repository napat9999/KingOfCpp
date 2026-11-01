#include<bits/stdc++.h>
using namespace std;
using ll =long long;
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string A="",B="";
    cin >> A >> B;

    ll N1=0,N2=0;
    for (char x:A) {
        N1 += x - '0';
    }
    N1 = N1%10;
    for (char x:B) {
        N2 += x - '0';
    }
    N2 = N2%10;
    if (N1 == N2) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}   
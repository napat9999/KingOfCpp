#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int lucus(int n){
    if (n==0) {
        return 2;
    } else if (n==1) {
        return 1;
    } else {
        return (lucus(n-1)+lucus(n-2));
    }
}


int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N =0;
    cin >> N;

    cout << lucus(N);
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int BOOM(int n) {
    if (n==0){
        return -2;
    } else if (n==1){
        return 2;
    } else if (n==2){
        return -1;
    } else if (n==3){
        return 1;
    } else {
        return BOOM(n-1) - (2*BOOM(n-2)) + BOOM(n-3) - (2*BOOM(n-4));
    }
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N=0;
    cin >> N;

    cout << BOOM(N);
}
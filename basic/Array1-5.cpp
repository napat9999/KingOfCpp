#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin >> n;
    
    if(n == 0){
        cout << 0;
        return 0;
    }

    if (n < 0) {
        cout << "-";
        n = -n;
    }

    int a[70], k =0;
    while (n > 0){
        a[k++] = n % 8;
        n /= 8;
    }
    for(int i = k - 1; i >= 0; i--) cout << a[i];
}

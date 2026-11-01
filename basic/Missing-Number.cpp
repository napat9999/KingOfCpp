#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    int sum = n*(n+1)/2;
    for (int i = 0; i < n-1; i++) {
        int x; cin >> x;
        sum -= x;
    }
    cout << sum;
}
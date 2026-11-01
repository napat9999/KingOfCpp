#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<int> X(n), Y(n);
    map<int,int> cx,cy;

    for (int i = 0; i < n; i++) {
        cin >> X[i] >> Y[i];
        cx[X[i]]++;
        cy[Y[i]]++;
    }

    int ans= 0;
    for (int i = 0; i < n; i++) {
        ans += (cx[X[i]]-1)*(cy[Y[i]]-1);
    }
    cout << ans;
}
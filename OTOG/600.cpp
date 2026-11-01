#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    vector<pll> p(n);
    for (auto &x : p) cin >> x.first >> x.second;
    sort(p.begin(),p.end(),greater<pll>());

    vector<pll> res;
    int maxb = -1e18;
    for (auto &x : p) {
        if (x.second > maxb) {
            res.push_back(x);
            maxb = x.second;
        }
    }
    reverse(res.begin(),res.end());
    for (auto &x : res) cout << x.first << " " << x.second << "\n";
}
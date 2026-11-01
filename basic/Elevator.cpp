#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int  N,K,M,Q ;
    cin >> N >> K >> M >> Q;
    map<int,vector<int>> m;
    while(M--) {
        int t,e,f;
        cin >> t >> e >> f; // เวลา หมายเลข ชั้น
        m[f].push_back(t);
    }
    for (auto &e : m) sort(e.second.begin(),e.second.end());
    while (Q--) {
        int a,s;
        cin >> a >>s; // ชั้น เวลา
        auto it = m.find(a);
        if (it == m.end()) {
            cout << -1 << "\n"; 
            continue;
        }
        auto &v = it->second;
        auto p = lower_bound(v.begin(),v.end(),s);
        if (p == v.end()){
            cout << -1 << "\n";
        } else {
            cout << *p << "\n";
        }       
    }
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string name, type;
    vector<string> order;
    map<string, vector<string>> m;

    while(cin >> name >> type) {
        if (!m.count(type)) {
            order.push_back(type);
        }
        m[type].push_back(name);
    }

    for (auto &t : order) {
        cout << t << ":";
        for (auto &n : m[t]) cout << " " << n;
        cout << "\n";
    }
}
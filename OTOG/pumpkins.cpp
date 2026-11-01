#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,q;
    cin >> n >>q;
    map<int, vector<int>> s;
    for (int i = 0;i < n;i++) {
        int v; cin >> v;
        s[v].push_back(i+1);
        
    }
    while (q--) {
        int x; cin >> x;
        auto it = s.find(x);
        if (it != s.end()) {
            for (int p : it ->second) cout << p << " ";
        } else {
            cout << -1;
        }
        cout << "\n";
    }
}
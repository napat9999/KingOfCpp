#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    map<int, char> m;
    int a;
    char b;
    vector<int> dup;
    while (cin >> a && a != 0) {
        cin >> b;
        if (m.find(a) == m.end()) {
            m[a] = b;
        } else {
            dup.push_back(a);
        }
    }
    for (int d : dup) cout << d << " is -Duplicate key-" << "\n";
    for (auto it : m) cout << it.first << " " << it.second << "\n"; 





























































































































































    
}
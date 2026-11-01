#include <bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";

class timemap {
    unordered_map<string , vector<pair<int,string>>> mp;  

public:
    void set(string key, string value, int timespace) {
        mp[move(key)].emplace_back(timespace, move(value));
    }

    string get(string key, int timespace) {
        auto it = mp.find(key);
        if (it == mp.end()) return "";
        auto& v = it->second;
        auto pos = upper_bound(begin(v), end(v), timespace, [](int t, const pair<int,string>& p) {
            return t < p.first;
        });
        if (begin(v) == pos) return "";
        return prev(pos)->second;
    }
};

signed main() {
    timemap tm;
    tm.set("foo", "bar", 1); 
    cout << tm.get("foo", 1); nl // 1 foo
    cout << tm.get("foo", 3); nl 
    tm.set("foo", "bar2", 4); 
    cout << tm.get("foo", 4); nl 
    cout << tm.get("foo", 5);
}
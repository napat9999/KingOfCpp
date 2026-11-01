#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    
    int n;
    cin >> n;
    map<string , int> m;
    while (n--) {
        string x,a;
        cin >> x;
        int b;
        if (x == "BID") {
            cin >> a >> b;
            m[a] = b;
        } else if (x == "CANCEL") {
            cin >> a;
            m.erase(a);
        } else if (x == "QUERY") {
            cin >> a;
            if (m.find(a) !=m.end()) {
                cout << m[a] << "\n";
            } else {
                cout << "NOT FOUND" << "\n";
            } 
        } else if (x == "TOP") {
            if (!m.empty()) {
                auto it =max_element(m.begin(),m.end(), [](const pair<string,int> &p,const pair<string,int> &q){return p.second < q.second; });
                cout << it -> first << " " << it->second << "\n"; 
            } else {
                cout << "EMPTY" << "\n";
            }
        } else if (x == "LIST") {
            if (!m.empty()) {
                for (auto it : m) cout << it.first << ": " << it.second <<"\n";
            } else {
                cout << "EMPTY" << "\n";
            }
        }
    }
}
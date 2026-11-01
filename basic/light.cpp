#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,g=0;cin >> n;
    set<int> on;
    while (n--) {
        string c; cin >> c ;
        if (c == "ON" || c == "OFF") {
            int x; cin >> x;
            int k = on.count(x-1) + on.count(x+1);
            if (c == "ON") {
                on.insert(x);
                g += 1-k;
            } else if (c == "OFF"){
                on.erase(x);
                g -= 1-k;
            }
        }else if (c == "?") {
            int x; cin >> x;
            if (on.count(x)) {                      
                cout << "YES" << "\n";
            } else {
                cout << "NO" << "\n";
            }
        } else if (c == "G") {
            cout << g << "\n";
        } else if (c == "C") {
            cout << on.size() << "\n";
        } else if (c == "F") {  
            if (on.empty()) {
                cout << "NONE" << "\n";
            } else {
                cout << *on.begin() << "\n";
            }
        }
    }
}
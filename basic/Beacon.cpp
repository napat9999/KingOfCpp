#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    set<int> s;
    for (int i = 0;i<n;i++ ) {
        int a,b;
        cin >> a >> b;
        if (a==1) {
            if (s.empty()) cout << -1 << "\n";
            else {
                int best = 1e18;
                auto it = s.lower_bound(b);
                if (it != s.end()) {
                    best = min(best,*it-b);
                }
                if (it != s.begin()) {
                    best = min(best,b - *prev(it));
                }
                cout << best << "\n";
            }
            s.insert(b);
        } else if (a == 2) {
            auto it = s.find(b);
            if (it != s.end()) {s.erase(it); cout << "REMOVED"<< "\n";}
            else cout << "NOT FOUND" << "\n";
        } else if (a == 3) {
            if (s.empty()) cout << -1 << "\n";
            else {
                int best = 1e18;
                auto it = s.lower_bound(b);
                if (it != s.end()) {
                    best = min(best,*it-b);
                }
                if (it != s.begin()) {
                    best = min(best,b - *prev(it));
                }
                cout << best << "\n";
            }
        }
        
    }
}
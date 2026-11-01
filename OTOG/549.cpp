#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    deque<int> s;
    for (int i = 0; i < n; i++) {
        string a; int b; cin >> a;
        if (a == "push") {
            cin >> b;
            s.push_back(b);
        } else if (a == "pop") {
            if (!s.empty()) {
                cout << s.front() << "\n";
                s.pop_front();
            } else {
                cout << "null" << "\n";
            }
        }
    }
}
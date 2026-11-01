#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    stack<pair<int,int>> s;   
    while (n--) {
        int a; cin >>a;
        if (a == 1) {
            int b; cin >> b;
            int mx;
            if (s.empty()) {
                mx = b;
            } else {
                mx = s.top().second;
                if (b > mx) {
                    mx = b;
                }
            }
            pair<int,int> p;
            p.first = b;
            p.second = mx;
            s.push(p);
        } else if (a==2) {
            if (!s.empty()) s.pop();
        } else if (a==3) {
            cout << s.top().second << "\n";
        }
    }
}
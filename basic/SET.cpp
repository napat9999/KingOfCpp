#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string line;
    getline(cin, line);
    stringstream ans(line);
    int cnt = 0,x;
    set<int> s;
    while(ans >> x) {
        cnt++;
        if (s.count(x)) {
           cout << cnt; 
           return 0;
        }
        s.insert(x);
    }
    cout << -1;
}
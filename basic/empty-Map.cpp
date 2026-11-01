#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    map<int , string> s;
    int a;
    string b;
    while (cin >> a && a != 0) {
        cin >> b;
        s[a] = b;
    }

    if (s.empty()) return 0;
    int lo = s.begin()->first;
    int hi = prev(s.end())->first;
    for (int i = lo;i <=hi;i++) {
        if (s.count(i)) {cout << i << " " << s[i] << "\n";}
        else {cout << i << " -Empty-\n";}
    } 
}
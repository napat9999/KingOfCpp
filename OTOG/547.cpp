#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string a,b;
    vector<int> s(999999,0);
    while (cin >> a >> b) {
        int cnt = 0;
        for (int i = 0; i+b.size()<=a.size();i++) {
            if (a.compare(i,b.size(),b)==0) cnt++;
        }
        cout << cnt;
        nl
    }

}
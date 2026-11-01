#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int a;
    cin >> a;
    vector<int> m;
    vector<int> n;
    for (int i = 1 ; i <= a; i++) {
        int x; cin >> x;
        m.push_back(x+i);
        n.push_back(x-i);
    }
   int x = *max_element(m.begin(),m.end()) - *min_element(m.begin(),m.end());
   int y = *max_element(n.begin(),n.end()) - *min_element(n.begin(),n.end());

   cout << max(x,y);
}
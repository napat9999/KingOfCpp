#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N;
    cin >> N;
    
    set<int> s;
    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;
        s.insert(x);
    }

    vector<int> res; 
    while( !(s.size()==1 && *s.begin()==0)) {
        int m = *s.rbegin();
        s.erase(prev(s.end()));
        int r;
        if (m > 10) {
            r = m/2;
        } else {
            r = 0;
        }
        res.push_back(r);
        s.insert(r);
    }

    int k;
    cin >> k;
    for ( int i = 0; i < k; i++) {
        int x;
        cin >> x;
        if (i) cout << " ";
        if (x <= (int)res.size()) {
            cout << res[x-1] ;
        } else {
            cout << 0;
        }
        
    }


}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k;
    cin >> n >> k;
    vector<array<int,4>> s;
    for (int i = 0; i < n; i++) {
        int a,b,c,d; cin >> a >> b >> c >>d;
        int x = (100*b) + (2*c) + (50*d); 
        s.push_back({-x,-b,-c,a});
    }
    sort(s.begin(),s.end());
    for (int i = 0; i < k; i++) {
        cout << s[i][3] << " ";
    }
        
    cout << "\n";
    for (int i = 0; i < k; i++) {
        cout << -s[i][0]<< " ";     
    }
        
    
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,q;
    cin >> n >>q;
    vector<int> in(n),out(n);
    for (int i = 0; i < n; i++) {
        cin >> in[i] >> out[i];
    }
    sort(in.begin(),in.end());
    sort(out.begin(),out.end());
    while (q--) {
        int t;
        cin >> t;
        int a = upper_bound(in.begin(),in.end(),t) - in.begin();
        int b = lower_bound(out.begin(),out.end(),t) - out.begin();
        cout << a-b << "\n";
        
    }
    
}
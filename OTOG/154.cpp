#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    for (int k= 0; k < n; k++) {
        int a,b; cin >> a >> b;
        vector<int> s(a+1,0);
        for (int i = 1; i <= a; i++) {
            int r;
            cin >> r;
            s[i] = r + s[i-1];
        }
        for (int i =0; i < b;i++) {
            int x,y; cin >> x >> y;
            cout << s[y+1]-s[x] << '\n';
            
        }
    }
}
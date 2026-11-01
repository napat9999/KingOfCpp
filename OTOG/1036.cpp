#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<int> a(n+1,0);
    for (int i = 1; i <= n; i++) {
        int c; cin >> c;
        a[i] = a[i-1] + (i % 2 ? c : -c);
    }

    while (m--){
        int x,y; 
        cin >> x >> y;
        int s = a[y] - a[x-1];
        if (x % 2 == 0) s = -s;
        cout << s << "\n";
    }
    
    
    
}
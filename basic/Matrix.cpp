#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int m,n;
    cin >> m >> n;
    vector<vector<int>> a(m,vector<int>(n)), b(m, vector<int>(n));

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << a[i][j] + b[i][j] << " ";
        }
        nl
    }
    
}
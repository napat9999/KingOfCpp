#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int m,n,k;
    cin >> m >> n >> k;
    
    vector<vector<int>> a(m,vector<int>(n));
    for (int i = 0; i < m;i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }   
    }
    vector<vector<int>> cost(m,vector<int>(n,1e18));
    vector<vector<int>> way(m,vector<int>(n,0));        

    cost[0][0] = a[0][0];
    way[0][0] = 1;

    for (int i = 0;i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 && j == 0) continue;
            if (i > 0) {
                int c = cost[i-1][j] + a[i][j];
                if (c < cost[i][j]) {
                    cost[i][j] = c;
                    way[i][j] = way[i-1][j];
                } else if (c == cost[i][j]) {
                    way[i][j] += way[i-1][j];
                }
            }
            if (j > 0) {
                int c = cost[i][j-1] + a[i][j];
                if (c < cost[i][j]) {
                    cost[i][j] = c;
                    way[i][j] = way[i][j-1];
                } else if( c == cost[i][j]) {
                    way[i][j] += way[i][j-1];
                }
            }
        }
    }
    int left = k - cost[m-1][n-1];
    if (left >= 0) cout  << way[m-1][n-1];
    else cout << 0;
}
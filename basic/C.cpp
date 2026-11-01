#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;
    cin >> n >> m;
    vector<vector<int>>  s(n,vector<int>(m));
    for (int i = 0; i < n; i++) {
        string line;
        cin >> line;
        for (int j = 0; j < m; j++){
            s[i][j] = line[j] - '0';
        }
    }

    int cnt = 0;
    vector<int> row;
    vector<int> column;
    vector<int> sum;
    for (int i = 0; i + 2 < n; i++) {
        for (int j = 0; j + 2 < m; j++) {
            if (s[i+1][j+1] == 0 && s[i+1][j+2] == 0 &&
                s[i][j] != 0 && s[i][j+1] != 0 && s[i][j+2] != 0 &&
                s[i+1][j] != 0 &&
                s[i+2][j] != 0 && s[i+2][j+1] != 0 && s[i+2][j+2] != 0) {
                cnt++;
                row.push_back(i+1);
                column.push_back(j+1);
                sum.push_back(s[i][j] + s[i][j+1] + s[i][j+2] + s[i+1][j] + s[i+2][j] + s[i+2][j+1] + s[i+2][j+2]);
            }
        }
    }
    if (cnt != 0) {
        cout << cnt << "\n";
        for( int i = 0; i < cnt; i++) {
        cout << row[i] << " " << column[i] << " " << sum[i] << "\n";    
        }
    } else cout << 0;
    
}
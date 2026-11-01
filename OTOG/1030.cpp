#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

int a[2000][2000];

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m,q; cin >> n >> m >> q;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    int sum = 0;
    int bad = 0;
    while (q--) {
        int x,y;
        char c;
        cin >> x >> y >>c;
        if (c == 'U') x--;
        else if (c == 'D') x++;
        else if (c == 'L') y--;
        else if (c == 'R') y++;

        if (x >= 0 && x < n && y >= 0 && y < m) sum += a[x][y];
        else bad++;
        
    }
    cout << sum << " " << bad;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

int dp[255][255];

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N,M;
    cin >> N >> M;
    for (int i = 1; i <= N;i++) {
        for (int j = 1; j <= M;j++) {   
            int x;
            cin >> x;
            dp[i][j] = x + max(dp[i-1][j],dp[i][j-1]);
        }
    }
    cout << dp[N][M];
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

static int p[1001][1001];

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int M,N,K;
    cin >> M >> N >> K;
    for(int i=1;i<=M;i++){
        for(int j=1;j<=N;j++){
            int x;
            cin >> x;
            p[i][j] = x + p[i-1][j] + p[i][j-1] - p[i-1][j-1];
        }
    }
    int best = 0;
    for(int i=K;i<=M;i++){
        for(int j=K;j<=N;j++){
            int s = p[i][j] - p[i-K][j] - p[i][j-K] + p[i-K][j-K];
            best = max(best, s);
        }
    }
    cout << best;
    nl
}

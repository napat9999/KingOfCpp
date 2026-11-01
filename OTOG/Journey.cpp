#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;



signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N,M,K;
    cin >> N >> M >> K;
    string walk = "";
    vector<vector<int>> arr(N+2,vector<int>(M+2,0));

    for (int i = 1; i <= N;i++) {
        for (int j = 1;j <= M;j++) {
            cin >> arr[i][j];
        }
    }

    int ci = 1, cj = 1; 
    for (int i = 1; i <= N;i++) {
        for (int j = 1;j <= M;j++) {
            if (arr[i][j] == 1) ci = i, cj = j; 
        }
    }
    int ans = 1;
    
    while (true) {
        if (arr[ci][cj-1] == ans+1) {
            cj--;
            walk += "L";
        } else if (arr[ci][cj+1]== ans+1) {
            cj++;
            walk += "R";
        } else if (arr[ci-1][cj]== ans+1) {
            ci--;
            walk += "U";
        } else if (arr[ci+1][cj]== ans+1) {
            ci++;
            walk += "D";
        } else break;
        ans++;
    }
    if (ans == K) {
        cout << "yes" << "\n" << walk;
    } else cout << "no";
}
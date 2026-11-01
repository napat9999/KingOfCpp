#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int x[4][5], mx = -1e18, sum=0;
    for (int i =0; i<4; i++) {
        for (int j = 0; j <5; j++) {
            cin >> x[i][j];
            if (mx < x[i][j]) mx = x[i][j];
            sum += x[i][j];
        }
        
        cout << "Total Scores: " << sum << " Highest Score: " << mx; nl
        sum = 0;
        mx = -1e18; 
    }
}
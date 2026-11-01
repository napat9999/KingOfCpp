#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N;
    cin >> N;
    vector<int> walk(N); //1 3 2
    vector<vector<int>> point(N+1,vector<int>(N+1));
    for (int i = 0;i < N; i++) cin >> walk[i]; 
    for (int i = 1;i<N+1;i++) {
        for (int j = 1;j<N+1;j++) {
            cin >> point[i][j];
        }
    }
    int mn = 0 ;
    for (int i = 0; i+1<N; i++) {
        mn += point[walk[i]][walk[i+1]];
    }
    while (next_permutation(walk.begin(),walk.end())) {
        int s = 0;
        for (int i = 0; i+1 < N; i++) {
            s += point[walk[i]][walk[i+1]];
        }
        if (s < mn) {
            for (int i = 0; i< N;i++) { 
                cout << walk[i] << " ";  
            }
            return 0;
        } 
    }
    cout << -1;
    
    

}
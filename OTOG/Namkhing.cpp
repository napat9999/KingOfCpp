#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N,Q;
    cin >> N >>Q;
    vector<int> S(N);
    vector<int> sum;
    for (int  i = 0; i < N;i++) {
        cin >> S[i];
    }
    for (int i = 0; i <Q;i++) {
        int a,b;
        cin >> a >>b;
        int x = S[a] - S[b];
        sum.push_back(abs(x));
    } 
    if (!sum.empty()) {
        for (auto &c :sum) cout << c<< " ";
    } else {
        cout << 0;
    }
    
}
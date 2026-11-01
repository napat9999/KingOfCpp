#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N;
    cin >> N;
    vector<int> S(N);
    for (int i = 0;i < N;i++) {
        cin >> S[i];
    }
    if (!next_permutation(S.begin(),S.end())) {
        cout << "NO NEXT";
    } else {
        for (int x : S) cout << x << " ";
    }
}
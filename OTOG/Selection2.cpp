#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N;
    cin >> N;
    vector<int> S(N);
    for (int i = 0; i < N; i++) cin >> S[i];

    if (N == 1) {
        cout << 0 << "\n";
        return 0;
    }

    int t1 = S[N-1];
    int total1 = 0;                      
    for (int j = 0; j < N; j++)
        if (S[j] >= t1) total1 += S[j];

    int t2 = S[N-2];
    int last = 0;
    for (int j = 0; j < N-1; j++)
        if (S[j] >= t2) last += S[j];

    for (int i = 0; i < N-1; i++) {
        int ans = total1;
        if (S[i] >= t1) ans -= S[i];     
        cout << ans << " ";
    }
    cout << last ;
}
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
    for (int i = 0; i <N; i++) cin >> S[i];
    for (int i = 0; i < N; i++) {
        vector<int> A = S;
        A.erase(A.begin()+i);
        int x = A.size()-1; 
        int sum = 0;
        for (int j = 0; j < A.size();j++) {
            if (A[j] >= A[x]) {
                sum += A[j];
            }
        } 
        cout << sum << " ";
    }
}
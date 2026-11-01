#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N = 0;  
    int sum = 1;
    cin >> N;

    if (N < 2) {
        cout << "NOT Perfect number";
        return 0;
    }

    for (int i = 2; i*i <= N; i++) {
        if (N % i == 0) {
            sum += i;
            if (i != N/i) {
                sum += N/i;
            }
        }
    }
    if (sum == N) {
        cout << "Perfect number";
    } else {
        cout << "NOT Perfect number";
    }
}

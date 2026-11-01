#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N ;
    cin >> N;
    int sum = 0;
    for (int i = 0;i < N;i++) {
        int x;
        cin >> x;
        if (x > 0) {
            sum += x;
        }
    }
    cout << sum;
}   
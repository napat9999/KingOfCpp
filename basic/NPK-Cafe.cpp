#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k;
    cin >> n >>k;
    vector<int> time(k+2);
    for (int i = 0; i<n;i++) {
        int in,out;
        cin >> in >> out;
        time[in]++;
        time[out+1]--;
    }
    for (int i = 1;i <= k; i++) time[i] += time[i-1];

    int a=-1,b=-1;
    for (int i = 0; i <= k;i++) {
        int v = time[i];
        if (v > a) {
            b = a;
            a = v;
        } else if( v < a && v > b) {
            b =v;
        }
    }
    cout << a << "\n";
    if (b != -1) cout << b << "\n";
}
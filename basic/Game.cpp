#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n; 
    int bestsum = -1e18,cursum = 0,curmax=0, bestmax = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i == 0 || cursum < 0) {
            cursum = x;
            curmax = x;
        } else {
            cursum += x;
            curmax = max(curmax, x);
        }
        if (cursum > bestsum) {
            bestsum = cursum;
            bestmax = curmax;
        }
    }
    cout << bestsum << " " << bestmax;


}
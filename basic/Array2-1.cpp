#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int x[5][2], height=0, age=0, ct =0, sum=0;

    for (int i = 0;i<5; i++) {
        for (int j=0; j<2; j++) {
            cin >> x[i][j];
            if (j == 1) {
                sum += x[i][1];
            }
        }
    }
    cout << fixed << setprecision(1) << (double)sum/5; nl
    for (int i =0; i<5; i++) {
        if ((double)sum/5 <= x[i][1] ) {
            cout << x[i][0] << " " << fixed << setprecision(1) << (double)x[i][1]; nl
            age += x[i][0];
            ct += 1;
        }
    }
    cout << fixed << setprecision(1) << double(age)/ct;
}
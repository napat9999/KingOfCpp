#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n"
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int x[5][3], math = 0, sci = 0, eng = 0, sum =0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> x[i][j];
            sum += x[i][j];
            if (j == 2) {
                math += x[i][0];
                sci += x[i][1];
                eng += x[i][2];
            }
        }
        cout << "Student " << i+1 << ": " << fixed << setprecision(2) << (double)sum/3; nl
        sum = 0;
    }
    nl
    cout << "Mathematics: " << fixed << setprecision(2) << (double)math/5; nl
    cout << "Science: " << fixed << setprecision(2) << (double)sci/5; nl
    cout << "English: " << fixed << setprecision(2) << (double)eng/5; nl

}
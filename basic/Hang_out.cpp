#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    vector<int> s(3);
    for (int &c : s) cin >> c;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string a; 
        int b;
        cin >> a >> b;
        if (a == "school") {
            cout << fixed << setprecision(1) << (double)s[0]* (b*0.7) << "\n";
        } else if (a == "sleep") {
            cout << fixed << setprecision(1) << (double)s[1] * (b*1.3)<< "\n";
        } else if (a == "hangout") {
            cout << fixed << setprecision(1) << (double)s[2] * (b * 4)<< "\n";
        }
    }
}
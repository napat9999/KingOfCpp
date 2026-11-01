#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    while (n--) {
        string a,b; cin >> a >> b;
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());

        if (a == b) {
            cout << "same\n";
        } else {
            cout << "not same\n";
        }
    }
}
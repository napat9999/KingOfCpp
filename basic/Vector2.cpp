#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,q;
    cin >> n >> q;
    vector<int> s(n);
    for (int i =0; i < n;i++) {
        cin >> s[i];
    }
    for (int i = 0; i < q; i++) {
        int x;
        cin >>x;
        if (x >= 0 && x < n) {
            cout << s[x] << "\n";
        } else {
            cout << "Out of Bounds\n" ;
        }
    }
}
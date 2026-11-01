#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N,M;
    cin >>N >>M;
    valarray<int> a(N);
    for (auto& c : a) cin >> c;
    sort(begin(a), end(a));

    while (M--) {
        int x;
        cin >> x;
        int idx = upper_bound(begin(a),end(a),x) - begin(a);
        cout << idx -1 << "\n";
    }

}

// 10 8
// 10 13 14 14 14 15 16 16 18 200
// 9 10 11 14 0 200 20 16

// -1
// 0
// 0
// 4
// -1
// 9
// 8
// 7
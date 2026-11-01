#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N,M;
    cin >> N >> M;
    valarray<int> a(N);
    for (auto& x :a) cin >> x;
    sort(begin(a),end(a));

    while (M--) {
        int x;
        cin >> x;
        auto it = upper_bound(begin(a),end(a),x);
        if (it == begin(a)) cout << -1 << "\n";
        else cout << *(it-1) << "\n";
    }
    
}
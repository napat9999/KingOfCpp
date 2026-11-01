#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    set<int> ms;
    while (n--) {
        int t,v;
        cin >> t >> v;
        if (t==1){
            ms.insert(v);
        } else {
            auto it = ms.lower_bound(v);
            if (it == ms.end()) {
                cout << "NO NINJA" << "\n";
            } else {
                cout << *it << "\n";
                ms.erase(it);
            }
        }
    }
}
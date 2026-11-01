#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N;
    cin >> N;
    vector<int> all;
    for (int i = 0;i < N; i++) {
        int x;
        cin >> x;
        vector<int> w(x);
        for (int j = 0;j<x;j++) {
            cin >> w[j];
        }
        copy(w.begin(),w.end(),back_inserter(all));
    }
    sort(all.begin(),all.end());
    all.erase(unique(all.begin(),all.end()), all.end());
    cout << "Total: " << all.size(); nl
    cout << "IDs: ";
    for (int v : all) cout << v << " ";

}
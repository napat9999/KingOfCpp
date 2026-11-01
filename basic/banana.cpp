#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string S;
    cin >> S;
    vector<string> ans;
    sort(S.begin(),S.end());
    do {
        ans.push_back(S);
    } while (next_permutation(S.begin(),S.end()));
    cout << ans.size() << "\n";
    for (auto &s : ans) cout << s << "\n";
}
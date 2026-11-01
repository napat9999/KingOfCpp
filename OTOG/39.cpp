#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,k,l;
    cin >> n >> k >> l;
    vector<int> s(n);
    iota(s.begin(),s.end(),1);
    while (--l > 0) next_permutation(s.begin(),s.end());
    for (int i = 0; i < k;i++) {
        cout << s[i] << " ";
    }

}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m,cnt=0;
    cin >> n >>m;
    vector<pair<int,int>> s;
    for (int i = 0; i < n;i++) {
        int x,y;
        cin >> x >>y;
        s.push_back(make_pair(x,y)); 
    }
    sort(s.begin(),s.end());

    int l = 0;
    for (int i = 0; i < n; i++) {
        while (s[l].first != s[i].first || s[i].second - s[l].second > m) l++;
        cnt += i - l;   
    }

    cout << cnt;
}
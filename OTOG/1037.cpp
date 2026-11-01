#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

string s;

bool check(int l, int r) {
    if (l >= r) return true;
    if (s[l] != s[r]) return false;
    return check(l+1,r-1);
}

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    cin >> s;
    cout << (check(0,s.size()-1) ? "yes" : "no");
}
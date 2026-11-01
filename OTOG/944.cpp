#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >>s;
    map<char,int> m;
    for (char &i : s) {
        m[i]++;
    }
    int mx = 0;
    for (auto &it : m) mx = max(mx, it.second);
    cout << mx;
}
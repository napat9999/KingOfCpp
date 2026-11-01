#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string t="";
    getline(cin, t);
    char x;
    cin >> x;

    for (char c : t) {
        if (tolower(c) == tolower(x)) continue;
        cout << c;
    }
}
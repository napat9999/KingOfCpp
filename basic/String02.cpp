#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string t="";
    getline(cin,t);
    for (char c : t) {
        if (islower(c)) cout << (char)toupper(c);
        else if (isupper(c)) cout << (char)tolower(c);
        else cout << c;
    }
}
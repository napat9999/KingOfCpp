#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string t;
    getline(cin ,t);
    string r(t.rbegin(), t.rend());
    if (t==r) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
    
}
#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string S="",ans = "";
    cin >> S;
    char prev = 0;

    for (char &c : S) {
        c = tolower(c);
        if ('a' <= c and c <= 'z' and c != prev) {
            ans += c;
        }
        prev = c;
    }

    cout << ans;
}
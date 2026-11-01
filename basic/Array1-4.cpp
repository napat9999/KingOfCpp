#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    getline(cin,s);
    for (char &c :s) {
        if (islower(c)){
            c = toupper(c);
        } else if (isupper(c)) {
            c = tolower(c);
        }
    }
    cout << s;
}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl "\n"
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    set<string> mons;
    for (int i = 0;i < n;i++) {
        string x;
        cin >> x;
        if (mons.count(x)) {
            cout << "ALREADY_SEEN" << "\n";
        } else {
            mons.insert(x); 
            cout << "FIRST_DISCOVERY" << "\n";
        }
    }
    cout << "UNIQUE SPECIES: "<<mons.size();
}
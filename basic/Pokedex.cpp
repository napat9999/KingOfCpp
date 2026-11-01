#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    
    int n;
    cin >> n;
    map<string, int> m;
    string a,b;
    while (n--){
        cin >> a >> b;
        if (a == "+") {
            m[b] += 1;
            
        } else if (a == "?") {
            cout << m[b] << "\n";
        } else if (a == "-") {
            m[b] -= 1;
        }

    }
    
}
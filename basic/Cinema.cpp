#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string s1,s2,res="";
    cin >> s1 >> s2;
    bool del[256] = {false};
    for (char c : s2) {
        for (char m :s1 ){
            if (tolower(c)==tolower(m)) {
                del[tolower((char)c)] = true;
            }
        }
    }

    for (char c : s1+s2) {
        if (!del[tolower((char)c)]) {
            res += c;
        }
    }
    
    vector<int> x(res.size(),0);
    string lo="",up="";
    for (int i = 0; i < (int)res.size(); i++) {
        if (islower(res[i])) {
            x[i] = 0;
            lo += res[i];
        } else {
            x[i] = 1;
            up += res[i];
        }
    }
    
    sort(lo.rbegin(),lo.rend());
    sort(up.begin(),up.end());

    int a= 0,b=0;
    for (int i = 0; i < (int)res.size(); i++) {
        if (x[i]) {
            res[i] = up[b++];
        } else {
            res[i] = lo[a++];
        }

    }
    cout << res;
}
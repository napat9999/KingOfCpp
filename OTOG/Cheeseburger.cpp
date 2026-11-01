
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
    ios::sync_with_stdio(0);cin.tie(0);
    int n,q; cin >> n >> q;
    map<int,int> s;
    vector<int> vt;
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        vt.push_back(a);
        s[a]++;
        if (s[a] > 1) {
            s[a] = -1;
        }
    }
    for (int i = 0; i < q; i++) {
        string r;
        int x; cin >> r >> x;
        if (r == "Eat") {
            if (s[x]== -1) {
                cout << "Dead\n";
                vt.erase(remove(vt.begin(),vt.end(), x), vt.end());
            } else if (s[x] != 0) {
                auto it = find(vt.begin(),vt.end(),x);
                cout << "Yummy " << (it - vt.begin())+1 << "\n";
                s[x]--;
                
                if (it != vt.end()) vt.erase(it);
            } else {
                cout << "Not Found\n";
            }
        } else if (r == "Duplicate") {
            vt.push_back(x);
            s[x]++;
            cout << "Successfully Duplicated and Brought to a Smooth, Successful Conclusion\n";
        }
    }

}



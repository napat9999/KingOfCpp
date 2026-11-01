#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    vector<int> s;
    bool idx = false;
    for (int i =0; i <n; i++) {
        int x;
        cin >> x;
        if (x%2==0) {
            s.push_back(x);
            idx = true;
        }
        
    }
    if (idx) {
        sort(s.rbegin(), s.rend());
        for (int i = 0; i < s.size(); i++) {
            cout << s[i] << " ";
        }
    } else {
        cout << "Empty";
    }
    

}
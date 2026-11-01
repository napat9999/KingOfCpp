#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<string> s;
    for (int i = 0; i < n; i++) {
        string a;
        cin >> a;
        if (a == "v_i_b") {
            string x;
            cin >> x;
            s.push_back(x);
        } else if (a == "v_i_b_a") {
            int x; cin >> x;
            for (int j = 0; j < x; j++) {
                string y; cin >> y;
                s.push_back(y);
            }
        } else if (a == "v_p_f") {
            cout << s.front() << "\n";
        } else if (a == "v_p_a") {
            for (size_t i = 0; i < s.size(); i++) {
                if (i > 0) cout << " ";
                    cout << s[i];
                }
            cout << "\n";
        } else if (a == "v_p_l") {
            cout << s.back() << "\n";
        } else if (a == "v_p_pos") {
            int x; cin >> x;
            cout << s[x-1] << "\n";
        } else if (a == "v_p_size") {
            cout << s.size() << "\n";
        } else if (a == "v_d_b") {
            s.pop_back();
        }
    }
    cout << "OK";
}
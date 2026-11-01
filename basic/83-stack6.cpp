#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;

    vector<int> s(n), ans(n,-1);
    for (int &x : s) cin >> x;

    vector<int> st;
    for (int i = 0; i <n ; i++) {
        while (!st.empty() && s[st.back()] < s[i])
        {
            ans[st.back()] = s[i];
            st.pop_back();
        }
        st.push_back(i);
        
    }

    for (int i = 0; i < n;i++) {
            cout << ans[i] << " ";   
    }
}
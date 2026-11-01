#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    vector<int> s(n);
    vector<int> odd;
    for (int i = 0;i<n;i++) {
        cin >> s[i];
        if (s[i] % 2 != 0) {
            odd.push_back(s[i]);
        }
    }
    sort(odd.begin(),odd.end());
    int a= 0;
    for (int i = 0; i<n;i++) {
        if (s[i] % 2 != 0) {
            s[i] = odd[a++];
        }
    }
    for (int &c : s) cout << c << " ";
}
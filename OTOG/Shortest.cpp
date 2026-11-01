#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,q;
    cin >> n >> q;

    vector<int> s(n+2,0);
    for (int i = 1; i <= n;i++) {
        int x;
        cin >> x;
        s[i] += x+s[i-1];
    };
    for (int i = 0; i < q;i++ ){
        int a,b;
        cin >> a  >> b;
        int sum = s[n];
        int fw, bw;
        if (a <= b) {
            fw = s[b-1] - s[a-1];
            bw = sum - s[b] + s[a];
        } else {
            fw = sum - s[a-1] + s[b-1];
            bw = s[a] - s[b];
        }
        cout << min(fw, bw) << " ";
    }
}
#include<bits/stdc++.h>
using namespace std;
#define int long long



signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,t,c;
    cin >> n >> t >> c; 

    int a,b,p=0,cnt=1;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
       
        int boat = max(1LL, (a+t-1)/t);
        if (boat > cnt) {
            cnt = boat;
            p = 0;
        }
        if (p + b > c ) {
            cnt++;
            p = 0;
        }
        p += b;
        cout << cnt << "\n";
        
    }

}
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n, d, f,cnt=0;
    cin >> n >> d >> f ;
    priority_queue<int> pq; 
    for (int i = 0; i <= n; i++) {
        int a,b;
        if (i < n) cin >> a>>b;           
        else a = d,b = 0;
        
        while (f < a && !pq.empty()) {

            f += pq.top();
            pq.pop();
            cnt++;
        }  
        if (f <a) {
            cout << -1;
            return 0;
        }
        pq.push(b);
        
        
    }
    cout << cnt;
}
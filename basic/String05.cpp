#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string n,m,r;
    cin >> n >> m;
    int sum = 0;
    int i = n.size()-1;
    int j = m.size()-1;

    while (i >= 0 || j >= 0 || sum > 0) {
        int cnt = sum;
        
        if (i >= 0) {
            cnt += n[i] - '0';
            i--;
        }
        if (j >= 0) {
            cnt += m[j]-'0';
            j--;
        }

        int digit = cnt % 10; // หน่วย
        sum = cnt / 10; // ทด

        r += (char)(digit + '0');
    }
    reverse(r.begin(),r.end());
    cout << r;
}
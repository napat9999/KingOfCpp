#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    double n = 0;
    double sum = 0;

    while (cin >> n && n != 0){
        sum += n;
    }
    cout << sum;
}
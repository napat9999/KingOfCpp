#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string n;
    cin >> n;

    int sum = 0;
    for (char c : n) {
        sum += c - '0';
    }
    cout << sum;
}
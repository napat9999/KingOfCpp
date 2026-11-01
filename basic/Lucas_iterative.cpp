#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;


signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N;
    cin >> N;
    int a=2,b=1;
    if (N==0) {    
        cout << a;
        return 0;
    }
    for (int i = 2; i <= N; i++) {
        int c = a+b;
        a=b;
        b=c;
    }
    cout <<b;
}
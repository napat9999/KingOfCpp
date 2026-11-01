#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N;
    cin >> N;
    vector<string> a(N),b(N);
    for (int i = 0; i < N;i++) cin >> a[i];
    for (int i = 0; i < N;i++) cin >> b[i];
    swap(a,b);
    for (int i = 0; i < N; i++) cout << a[i] << " ";
    cout << "\n";
    for (int i = 0; i < N; i++) cout << b[i] << " ";
}
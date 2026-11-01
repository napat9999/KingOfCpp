#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    ll t=0, s=0; // ปัจจุบัน คงเหลือ
    cin >> t >> s;

    cout << t; nl
    cout << t+1; nl t += 3;
    cout << t; nl s-=1;
    cout << s; nl 
    cout << s; nl s-=2;
    cout << t*s; nl 
    cout << t; nl
    cout << s; nl s+=2; 
    cout << s; nl
    cout << t << " " << s;

}
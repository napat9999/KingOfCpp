#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    double x1=0,y1=0,x2=0,y2=0,D=0;
    cin >> x1 >> y1 >> x2 >> y2;

    D = sqrt(pow(x2-x1,2) + pow(y2-y1,2));
    cout << fixed << setprecision(2) << D;
}
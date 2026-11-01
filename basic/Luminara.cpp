#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,a;
    cin >> n >> a;
    int all = n*a;
    int hour = all / 60;
    int min = 0;
    if (all - hour != 0){
        min = all - (hour*60);
    }
    if (n == 0 || a == 0) {
        cout << "No teaching";
    } else if (min == 0){
        cout << hour << " hours";
    } else if (hour == 0) {
        cout << min << " minute";
    } else {
        cout << hour << " hours " << min << " minute";
    }

}


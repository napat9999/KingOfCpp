#include<bits/stdc++.h>
using namespace std;
#define int long long

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    vector<tuple<int,int,int,string> > ok;  
    vector<string> bad;
    for (int i = 0; i < n; i++) {
        string name;
        int d, m, y;
        cin >> name >> d >> m >> y;
        int days[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
        if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0) days[2] = 29;
        if (y > 0 && y <= 1000000 && m > 0 && m <= 12 && d > 0 && d <= days[m])
            ok.push_back(make_tuple(y, m, d, name));
        else
            bad.push_back(name);
    }
    sort(ok.begin(), ok.end());
    for (auto &p : ok)
        cout << get<3>(p) << " : " << get<2>(p) << " " << get<1>(p) << " " << get<0>(p) << "\n";
    for (auto &s : bad)
        cout << s << " : Date is not correct\n";
}

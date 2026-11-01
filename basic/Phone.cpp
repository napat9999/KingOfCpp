#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    const string key[10] = {"","","ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};
    int N,S,M;
    cin >>N >> S >>M;
    string s;
    auto press = [&](int S, int M) {
        if (S==1) {
            while (M-- && !s.empty()) {
                s.pop_back();
            }
        } else {
            s += key[S][(M-1) % key[S].size()];
        }
    };
    press(S,M);
    int row = (S-1)/3, col = (S-1) % 3;
    for (int i = 0;i < N-1; i++) {
        int h,v;
        cin >> h >> v >>M;
        col += h,row +=v;
        press(row * 3 + col + 1,M);
    }
    if (s.empty()) {
        cout << "null"; 
    }else {
        cout << s;
    }
}
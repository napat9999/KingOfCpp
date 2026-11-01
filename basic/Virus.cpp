#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n, flag, p;
    cin >> m >> n >> flag >> p;
    string v[m], f[n];
    for (int i = 0; i < m; i++) cin >> v[i];
    for (int i = 0; i < n; i++) cin >> f[i];

    for (int i = 0; i < m; i++) {
        int cnt = 0, L = v[i].size();
        for (int j = 0; j < n; j++)
            for (int s = 0; s + L <= (int)f[j].size(); s++) {
                int k = 0;
                while (k < L) {
                    if (flag && k == p - 1) { k++; continue; }   
                    if (tolower(f[j][s+k]) != tolower(v[i][k])) break; 
                    k++;
                }
                if (k == L) cnt++;
            }
        cout << cnt << '\n';
    }
}
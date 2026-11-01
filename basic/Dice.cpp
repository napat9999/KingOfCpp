#include <bits/stdc++.h>
using namespace std;

int perm[6][6] = {
    {3, 0, 2, 5, 4, 1}, // F
    {1, 5, 2, 0, 4, 3}, // B
    {4, 1, 0, 3, 5, 2}, // L
    {2, 1, 5, 3, 0, 4}, // R
    {0, 4, 1, 2, 3, 5}, // C
    {0, 2, 3, 4, 1, 5}  // D
};

int idx(char c) {
    switch (c) {
        case 'F': return 0;
        case 'B': return 1;
        case 'L': return 2;
        case 'R': return 3;
        case 'C': return 4;
        default:  return 5; // D
    }
}

int main() {
    int n;
    cin >> n;
    for (int k = 0; k < n; k++) {
        string s;
        cin >> s;
        int d[6] = {1, 2, 3, 5, 4, 6};
        for (char c : s) {
            int m = idx(c);
            int t[6];
            for (int j = 0; j < 6; j++) t[j] = d[perm[m][j]];
            for (int j = 0; j < 6; j++) d[j] = t[j];
        }
        if (k) cout << ' ';
        cout << d[1];
    }
}

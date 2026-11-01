#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";


signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int N,M;
    cin >> N >> M;
    vector<int> a(N), b(M);
    for (int &x : a) cin >> x;
    for (int &x : b) cin >> x;

    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    vector<int> inter, uni, diff;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(inter));
    set_union(a.begin(), a.end(), b.begin(), b.end(), back_inserter(uni));
    set_difference(a.begin(), a.end(), b.begin(), b.end(), back_inserter(diff));

    if (!inter.empty()) {
        for (int &c : inter) cout << c << " "; nl
    } else cout << -1<< "\n"; 
    if (!uni.empty()) {
        for (int &c : uni) cout << c << " "; nl
    } else cout << -1 << "\n"; 
    if (!diff.empty()) {
        for (int &c : diff) cout << c << " "; nl
    } else cout << -1 << "\n"; 
}

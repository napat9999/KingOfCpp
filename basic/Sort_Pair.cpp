#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n; cin >> n;
    vector<pair<string,int>> s;
    for (int i = 0; i < n; i++) {
        string name; int score;
        cin >> name >> score;
        if (0 <= score && score <= 100) {
            s.push_back(make_pair(name,score));
        } else {
            s.push_back(make_pair(name,-1));
        }
        
    }
    sort(s.begin(), s.end(), [](const pair<string, int> &a, const pair<string, int> &b) {if (a.second != b.second) return a.second > b.second; return a.first < b.first;});
    for (auto &c : s){
        cout << c.first << " ";
        if (c.second == -1) cout << "null";
        else cout << c.second;
        cout << "\n";
    } 
    
}
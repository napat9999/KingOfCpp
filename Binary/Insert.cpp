#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    vector<int> nums;
    string line;
    getline(cin, line);
    stringstream ss(line);
    int x;
    while (ss >> x) {
        nums.push_back(x);
    }
     int target = 0;
     cin >> target;

     int lo =0, hi = nums.size();
     while (lo < hi) {
        int mid = lo + (hi-lo)/2;
        if (nums[mid] < target) {
            lo = mid +1 ;
        } else {
            hi = mid;
        }
     }
     cout << lo;
}
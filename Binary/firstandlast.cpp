#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

int lowerbond(vector<int>(nums), int target) {
    int lo = 0, hi = nums.size();
    while ( lo < hi) {
        int mid = lo + (hi-lo)/2;
        if (nums[mid] < target) {
            lo = mid + 1;
        } else {
            hi = mid;
        }
    }
    return lo;
}

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    vector<int> nums;
    string line;
    getline(cin, line);
    stringstream ss(line);
    int x;
    while(ss >> x){
        nums.push_back(x);
    }

    int target = 0;
    cin >> target;

    int first = lowerbond(nums, target);
    int last = lowerbond(nums, target+1)-1;
    if (first == nums.size() || nums[first] != target) {
        cout << "[-1,-1]";
        return 0;
    } 
    cout << "[" << first << "," << last << "]";



}
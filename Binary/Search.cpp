#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    vector<int> nums;
    int target;
    string line;
    getline(cin, line);
    stringstream ss(line);
    int x;
    while (ss >> x) {
        nums.push_back(x);
    }

    cin >> target;
    int left=0;
    int right = nums.size()-1;

    while (left <= right) {
        int mid = left + (right-left)/2;

        if (nums[mid] == target) {
            cout << mid;
            return 0;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid -1;
        }
    }
    cout << -1;
    return 0;
}
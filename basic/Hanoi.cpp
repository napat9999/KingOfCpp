#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

void hanoi(int n, char from, char to, char via){
    if(n == 0) return;
    hanoi(n-1, from, via, to); // A B C 
    cout << "moved from " << from << " to " << to << "\n";
    hanoi(n-1, via, to, from); // 
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    hanoi(n, 'A', 'C', 'B');
}

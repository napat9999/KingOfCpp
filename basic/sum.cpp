#include<bits/stdc++.h>
using namespace std;
using ll =long long;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string N;
    cin >> N;

    ll sum = 0;

    for (char c:N) {
        sum += c -'0';
    }
    cout << N.size() << " " << sum;
}

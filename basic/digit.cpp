#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    string M, N;
    cin >> M >> N;
    int d = M.back() - '0';
    int e = N.back() - '0'; //4
    if(N.size() > 1) {
        e += 10 * (N[N.size()-2] - '0'); // หาหลัก10 เพราะ 12 , 22 % 4 ไม่เท่ากัน
    }
    e %= 4; // หลักหน่วยวนทุก 4 หลัก
    if(e == 0) {
        e = 4;
    }   
    int c = 1;
    for(int i = 0; i < e; i++) {
        c = c * d % 10;
    }
    cout << c;
}

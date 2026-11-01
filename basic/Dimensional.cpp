#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define int ll

template<typename T>
void vout(vector<T> v){
    for(T a:v){
        cout << a << " ";
    }cout << "\n";
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(nullptr);
    int N,Q;
    cin >> N >> Q;
    vector<int> S;
    for (int i = 0;i < N;i++) {
        int x;
        cin >> x;
        S.push_back(x);
    }
    for (int i = 0;i < Q;i++) {
        int a,b,l;
        cin >> a;
        if (a==1) {
            cin >> b;
            S.push_back(b);
        } else if (a==2 && !S.empty()) {
            S.pop_back();
        } else if (a==3) {
            cin >> b >>l;
            if (l < S.size()) {
                reverse(S.begin()+b,S.begin()+l+1);
            }         
        } 
    }
    if (!S.empty()) {
        for (int &c : S) cout << c << " ";
    } else cout << "EMPTY";
    
}
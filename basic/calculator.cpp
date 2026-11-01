#include<bits/stdc++.h>
using namespace std;
using ll = long long;
#define nl cout << "\n";
using pll = pair<ll,ll>;

double sum(double a, double b) {
    return a + b;
}
double nev(double a, double b) {
    return a - b;
}
double mul(double a, double b) {
    return a*b;
}
double div(double a, double b) {
    return (double)a/b;
}

int main(){
    ios::sync_with_stdio(0);cin.tie(0);
    char S;
    double a=0,b=0;
    cin >> a >> S >>b;

    switch (S)
    {
    case '+':
        cout << sum(a,b);
        break;
    case '-':
        cout << nev(a,b);
        break;
    case '*':
        cout << mul(a,b);
        break;
    case '/':
        cout << div(a,b);
        break;
    }
}
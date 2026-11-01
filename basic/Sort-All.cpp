#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

void mintomax(valarray<long double>& a, valarray<string>& t) {
    int n = a.size();
    for (int i = 0;i < n-1;i++) {
        bool swapped = false;
        for (int j = 0; j < n-1-i; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j],a[j+1]);  
                swap(t[j],t[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void maxtomin(valarray<long double>& a,valarray<string>& t) {
    int n = a.size();
    for (int i = 0; i < n-1; i++) {
        bool swapped = false;
        for (int j = 0; j < n-1-i; j++) {
            if (a[j] < a[j+1]) {
                swap(a[j], a[j+1]);
                swap(t[j], t[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }   
}

void Selection2(valarray<long double>& a) {
    int n = a.size();
    for (int i = 0; i < n-1; i++) {
        int idx = i;
        for (int j = i+1; j < n; j++) {
            if (a[j] < a[idx]) idx = j;
        }
        if (idx != i) {
            swap(a[i], a[idx]);
        }
    }
}

string Selectionascii(string& text) {
    int n = text.size();
    for (int i = 0; i < n-1; i++) {
        int idx = i;
        for (int j = i+1; j < n; j++) {
            if (text[j] < text[idx]) idx = j;
        }
        if (idx != i) {
            swap(text[i], text[idx]);
        }
    }
    return text;
}

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    int n,m;
    cin >> n >> m;
    valarray<long double> s(n);

    if (m==4) {
        string text="";
        for (int i = 0; i < n; i++) {
            char c;
            cin >> c;
            text += c;
        }
        Selectionascii(text);
        for (char c : text) cout << c << " ";
        return 0;
    }

    valarray<string> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
        s[i] = stold(t[i]);
    }

    if (m==1) {
        mintomax(s, t);
        for (int i = 0; i < n; i++) cout << t[i] << " ";
    } else if (m==2) {
        maxtomin(s, t);
        for (int i = 0; i < n; i++) cout << t[i] << " ";
    } else if (m==3) {
        Selection2(s);
        cout << fixed << setprecision(2);
        for (int i = 0; i < n; i++) cout << s[i] << " ";
    }
}
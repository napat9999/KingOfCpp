#include<bits/stdc++.h>
using namespace std;
#define int long long
#define nl cout << "\n";
using pll = pair<int,int>;

signed main(){
    ios::sync_with_stdio(0);cin.tie(0);
    vector<string> names;
    string s;
    while (cin >> s && s != "end") names.push_back(s);

    string t; cin >> t;

    if (t=="1") {
        for (char c = 'a'; c <= 'z'; c++) {
            bool first = true;

            for (auto it = names.begin(); it != names.end(); it++) {
                char head = tolower((*it)[0]);
                if (head == c) {
                    if (first) {
                        cout << c << " :";
                        first = false;
                    }
                    cout << " " << *it;
                }
            }
            if (first == false) cout << "\n";
        }
    } else {
        char ch;
        if (t == "2") {
            cin >> ch;
        }else {
            ch = t[0];
        }
        ch = tolower(ch);

        int position = -1;
        string found = "";
        int index = 304;

        for (auto it = names.begin(); it != names.end(); ++it) {
            char head = tolower((*it)[0]); 
            if (head == ch) {
                position = index;
                found = *it;
            }
            index++;
        }
        if (position == -1) {
            cout << "Not found!";
        } else {
            cout << "Found at position : " << position << " is " << found;
        }
    }
}
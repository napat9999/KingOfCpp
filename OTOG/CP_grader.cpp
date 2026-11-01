
#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <string>

std::string secret;
int query_count = 0;
int query_limit = 0;

bool lex_smaller(const std::string& a, const std::string& b) {
    int n = std::min((int)a.size(), (int)b.size());
    for (int i = 0; i < n; i++) {
        if (a[i] < b[i]) return true;
        if (a[i] > b[i]) return false;
    }
    return a.size() < b.size();
}

int query(const std::string& q) {
    query_count++;
    if (query_count > query_limit) {
        std::cout << "too many query\n";
        std::exit(0);
    }

    int n = (int)secret.size();
    int cnt = 0;
    for (int l = 0; l < n; l++) {
        for (int r = l; r < n; r++) {
            std::string sub = secret.substr(l, r - l + 1);
            if (lex_smaller(sub, q)) cnt++;
        }
    }
    return cnt;
}

int main() {
    int n;
    std::cin >> n >> secret;

    query_count = 0;
    query_limit = 2 * n;

    std::string ans = answer(n);
    std::cout << ans << "\n";
    return 0;
}
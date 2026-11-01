#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pll = pair<ll, ll>;

int main() {
    ll N = 0;
    cin >> N;

    vector<pll> provinces(N);
    ll total = 0;
    for (ll i = 0; i < N; i++) {
        cin >> provinces[i].first;
        provinces[i].second = i;
        total += provinces[i].first;
    }

    sort(provinces.begin(), provinces.end(), [](const pll &a, const pll &b) {
        return a.first > b.first;
    });

    vector<ll> prefix(N + 1, 0);
    for (ll k = 0; k < N; k++) {
        prefix[k + 1] = prefix[k] + provinces[k].first;
    }

    vector<ll> position(N);
    for (ll p = 0; p < N; p++) {
        position[provinces[p].second] = p;
    }

    vector<ll> answer(N);
    for (ll i = 0; i < N; i++) {
        ll p = position[i];
        ll own = provinces[p].first; 

        ll low = 0;
        ll high = N - 1; 
        while (low < high) {
            ll mid = (low + high) / 2; 

            ll others = 0;
            if (mid <= p) {
                others = prefix[mid]; 
            } else {
                others = prefix[mid + 1] - own;
            }

            if ((own + others) * 2 > total) {
                high = mid;
            } else {
                low = mid + 1; 
            }
        }
        answer[i] = low;
    }

    for (ll i = 0; i < N; i++) {
        cout << answer[i] << "\n";
    }

    return 0;
}

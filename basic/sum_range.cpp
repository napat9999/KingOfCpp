#include <bits/stdc++.h>
using namespace std;

int main() {
    int M = 0;
    int N = 0;
    long long sum = 0;
    cin >> M;
    cin >> N;
    if (M<N) {
        for (int i =M; i<=N; i++)
            sum += i;
        cout << sum;
    } else{
        cout << "Error\n";
    }
    return 0;
}
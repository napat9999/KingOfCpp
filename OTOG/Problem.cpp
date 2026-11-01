#include <bits/stdc++.h>

using namespace std;

const int MAXN = 10000005;

int a[MAXN];
int sum[MAXN];
long long ans[MAXN];


// Fast input: non-negative integers and char only

struct Reader {

    static constexpr int SZ = 1 << 20;

    char buf[SZ]; int at = 0, len = 0;

    inline char get() { if (at == len) { len = fread(buf, 1, SZ, stdin); at = 0; if (!len) return 0; } return buf[at++]; }

    inline int number() { char c = get(); while (c && c <= ' ') c = get(); int x = 0; while (c >= '0' && c <= '9') { x = x * 10 + c - '0'; c = get(); } return x; }

};


// Fast output: non-negative 64-bit integers and char

struct Writer {

    static constexpr int SZ = 1 << 20;

    char buf[SZ]; int at = 0;

    inline void flush() { if (at) fwrite(buf, 1, at, stdout); at = 0; }

    inline void ch(char c) { if (at == SZ) flush(); buf[at++] = c; }

    inline void num(long long x) { char s[24]; int p = 0; do { s[p++] = '0' + x % 10; x /= 10; } while (x); while (p) ch(s[--p]); }

    ~Writer() { flush(); }

};


Reader in;

Writer out;

int main(){
    ios::sync_with_stdio(0);cin.tie(0);

    int n = in.number();
    for (int i = 0; i < n; i++) a[i] = in.number();

    sum[n] = -1;
    long long cur = 0;
    for (int j = n-1; j >= 0; j--) {
        if (a[j] > sum[j+1]) cur += a[j];
        sum[j] = max(a[j],sum[j+1]);
    }

    long long *pre = ans;
    pre[0] = 0;
    int sz = 0, p = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > sum[i+1]) cur -= a[i];
        int M = sum[i+1];
        while(p < sz && pre[p+1] - pre[p] > M) p++;

        out.num(cur + pre[p]);
        out.ch(' ');

        while (sz && pre[sz] - pre[sz -1] <= a[i]) sz--;
        if (p > sz) p = sz;
        pre[sz+1] = pre[sz] + a[i];
        sz++;
    }
    return 0;
    
}
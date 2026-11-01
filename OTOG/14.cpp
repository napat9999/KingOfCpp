#include <bits/stdc++.h>
int main() {
    FILE* f = popen("py", "w");
    fputs(R"(for s in ["OCOM26"]: print(s))", f);
    pclose(f);
}
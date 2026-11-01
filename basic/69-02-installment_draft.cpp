#include <bits/stdc++.h>
using namespace std;

int main() {
    string name = "";
    char plan; 
    long long price = 0;
    int downPercent =0;
    float rate = 0;
    int months =0;
    float feePercent= 0;

    cin >> name >> plan >> price >> downPercent >> rate >> months >> feePercent;

    cout << name[0] << plan << months << price % 1000 << "\n";
    cout << (price*(100-((int)plan-64)))/100;
}
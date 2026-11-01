#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    string name;
    char plan;
    ll price;
    ll downPercent;
    double rate;
    ll months;
    double feePercent;

    cin >> name >> plan >> price >> downPercent >> rate >> months >> feePercent;

    ll discount = plan - 'A';
    ll priceAfterDiscount = price * (100 - discount) / 100;
    ll downPayment = priceAfterDiscount * downPercent / 100;
    ll loan = priceAfterDiscount - downPayment;

    double fee = loan * feePercent / 100.0;
    double monthly = rate / 100.0 / 12.0;
    double Pay = loan * monthly / (1.0 - pow(1.0 + monthly, -months));
    ll payment = (ll)ceil(Pay);
    ll sum = payment * months;
    ll Interest = sum - loan;
    double Percent = Interest * 100.0 / loan;

    ll over = Interest * 100 > loan * 20;

    ll years = months / 12;
    ll remain = months % 12;

    ll Digit = price % 1000;    

    cout << name[0] << plan << months << Digit << "\n";
    cout << priceAfterDiscount << "\n";
    cout << downPayment << "\n";
    cout << loan << "\n";
    cout << fixed << setprecision(2) << fee << "\n";
    cout << payment << "\n";
    cout << sum << "\n";
    cout << Interest << "\n";
    cout << fixed << setprecision(2) << Percent << "\n";
    cout << over << "\n";
    cout << years << " " << remain << "\n";

    return 0;
}

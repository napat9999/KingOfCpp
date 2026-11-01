#include <bits/stdc++.h>
using namespace std;

int main() {
    string name= "";
    char grade;
    long long age = 0,id =0;
    double weight = 0,height=0,temp=0;
    bool type1 = true;
    bool type2 = true;

    cin >> name >> grade >> age >> id >> weight >> height >> temp;

    type1 = (age >= 18);
    type2 = (age >= 13 && age <= 19);

    cout << name << "\n"
         << name.size() << "\n"
         << (char)(grade + 1) << "\n"
         << (int)grade << "\n"
         << age*12 << "\n"
         << id*1000 << "\n"
         << fixed << setprecision(2) << weight/pow(height/100,2) << "\n"
         << setprecision(1) << temp*9/5+32 << "\n"
         << type1 << "\n"
         << type2 << "\n";    return 0;
}
        
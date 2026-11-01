#include <iostream>
using namespace std;

int main()
{
    double x;
    double y;

    cin >> x >> y;

    if (x == 0 && y == 0)
    {
        cout << "Origin";
    }
    else if (y == 0)
    {
        cout << "X";
    }
    else if (x == 0)
    {
        cout << "Y";
    }
    else if (x > 0 && y > 0)
    {
        cout << "1";
    }
    else if (x < 0 && y > 0)
    {
        cout << "2";
    }
    else if (x < 0 && y < 0)
    {
        cout << "3";
    }
    else
    {
        cout << "4";
    }

    return 0;
}

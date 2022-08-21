#include <iostream>
#include <cmath> // include math operations

using namespace std;

int main()
{
    cout << 5 + 7 << endl;
    cout << 5 * 7 << endl;

    cout << 11 % 2 << endl;
    // The remainder

    int wnum = 5;
    double dnum = 5.5;

    wnum++;
    cout << wnum << endl;

    wnum--;
    cout << wnum << endl;

    wnum+=80;
    cout << wnum << endl;

    cout << 10 / 3 << endl;
    cout << 10.0 / 3.0 << endl;
    // See the difference

    cout << pow(3, 3) << endl;
    cout << round(3.3) << endl;
    cout << ceil(4.3) << endl;
    cout << floor(4.3) << endl;

    cout << fmax(3, 10) << endl;
    cout << fmin(3, 10) << endl;

    return 0;
}

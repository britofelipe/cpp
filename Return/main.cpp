#include <iostream>

using namespace std;

double cube(double num){
    double result = num * num * num;
    return result;
}

int main()
{
    cout << cube(3) << endl;
    cout << cube(4) << endl;

    return 0;
}

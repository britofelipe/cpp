#include <iostream>

using namespace std;

int main()
{
    int age = 23;
    double gpa = 3.4;
    string name = "Felipe";

    cout << &age << endl;

    int *pAge = &age;
    double *pGpa = &gpa;
    string *pName = &name;

    cout << pAge << endl;
    cout << *pAge << endl;
    cout << *&gpa << endl;

    return 0;
}

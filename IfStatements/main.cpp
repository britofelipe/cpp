#include <iostream>

using namespace std;

int main()
{

    bool isMale = true;

    if(isMale) {
        cout << "You are male" << endl;
    } else {
        cout << "You are not male" << endl;
    }

    bool isTall = true;

    if(isMale && isTall) {
        cout << "You are a tall male" << endl;
    } else {
        cout << "You are not male" << endl;
    }

    isMale = false;
    isTall = false;

    if(isMale && isTall) {
        cout << "You are a tall male" << endl;
    } else if (isMale && !isTall) {
        cout << "You are a short male" << endl;
    } else if (!isMale && isTall) {
        cout << "You are tall but not male" << endl;
    } else {
        cout << "You are not tall and not male" << endl;
    }

    return 0;
}

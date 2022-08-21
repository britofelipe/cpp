#include <iostream>

using namespace std;

int getMax(int num1, int num2) {

    if (num1 != num2) {
        if (num1 > num2) {
            return num1;
        } else {
            return num2;
        }
    } else {
        return num1;
    }


}

int getMax(int num1, int num2, int num3) {

    if (num1 >= num2 && num1 >= num3) {
        return num1;
    } else if (num2 >= num1 && num2 >= num3) {
        return num2;
    } else if (num3 >= num1 && num3 >= num2) {
        return num3;
    } else {
        if (num1 == num2) {
            return num1;
        } else if (num2 == num3) {
            return num2;
        } else if (num1 == num1) {
            return num1;
        }
    }
}

int main()
{
    cout << getMax(1,3) << endl;
    cout << getMax(3,1) << endl;
    cout << getMax(3,3) << endl;
    cout << getMax(1, 2, 3) << endl;
    cout << getMax(1, 3, 2) << endl;
    cout << getMax(1, 3, 3) << endl;
    cout << getMax(2, 1, 3) << endl;
    cout << getMax(2, 3, 1) << endl;
    cout << getMax(2, 3, 3) << endl;
    cout << getMax(3, 1, 2) << endl;
    cout << getMax(3, 2, 1) << endl;
    cout << getMax(3, 2, 2) << endl;

    return 0;
}

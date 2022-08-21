#include <iostream>

using namespace std;

int main()
{
    int numbers[] = {4, 8, 15, 16, 23, 42};

    cout << numbers[1];

    numbers[1] = 3;

    cout << numbers[1];

    return 0;
}

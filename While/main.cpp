#include <iostream>

using namespace std;

int main()
{
    int index = 1;
    while(index <= 5) {
        cout << index << endl;
        index++;
    }

    do {
        cout << index << endl;
        index++;
    } while(index <= 5);
    // does at least one time

    return 0;
}

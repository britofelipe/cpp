#include <iostream>

using namespace std;

int main()
{
    // Numbers and characters
    int age;
    cout << "Enter your age: ";
    cin >> age;

    cout << "You are " << age << " years old" << endl;

    // Strings
    string name;
    getline(cin, name);
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Nice to meet you, " << name;

    return 0;
}

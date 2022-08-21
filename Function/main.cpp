#include <iostream>

using namespace std;

void sayHi(string name, int age){
    cout << "Hello " << name << ", you are " << age << " years old" << endl;
}

int main()
{
    sayHi("Mike", 20);

    string name1 = "John";
    int age1 = 23;

    sayHi(name1, age1);

    return 0;
}

#include <iostream>

using namespace std;

int main()
{
    string phrase = "My name is Felipe";
    cout << phrase[11] << endl;

    // Changing individual characters
    phrase[11] = 'B';
    phrase[12] = 'r';
    phrase[13] = 'i';
    phrase[14] = 't';
    phrase[15] = 'o';
    phrase[16] = '.';

    cout << phrase << endl;

    cout << phrase.find("Brito", 0) << endl;
    // This shows that "Brito" is [11] in the string

    cout << phrase.substr(11, 5) << endl;
    // This shows 5 characters after the index 11

    string name = phrase.substr(11, 5);
    // Storing that data

    cout << name << endl;

    return 0;
}

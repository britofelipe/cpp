#include <iostream>

using namespace std;

string getDayOfWeek(int dayNum) {
    string dayName;

    if(dayNum == 1) {
        dayName = "Sunday";
    } else if (dayNum == 2) {
        dayName = "Monday";
    } else if (dayNum == 3) {
        dayName = "Tuesday";
    } else if (dayNum == 4) {
        dayName = "Wednesday";
    } else if (dayNum == 5) {
        dayName = "Thursday";
    } else if (dayNum == 6) {
        dayName = "Friday";
    } else if (dayNum == 7){
        dayName = "Saturday";
    } else {
        dayName = "Please enter a valid number";
    }
    return dayName;
}

string getDayOfWeekWithSwitch(int dayNum) {
    string dayName;

    switch(dayNum) {
    case 1:
        dayName = "Sunday";
        break;
    case 2:
        dayName = "Monday";
        break;
    case 3:
        dayName = "Tuesday";
        break;
    case 4:
        dayName = "Wednesday";
        break;
    case 5:
        dayName = "Thursday";
        break;
    case 6:
        dayName = "Friday";
        break;
    case 7:
        dayName = "Saturday";
        break;
    default:
        dayName = "Please enter a valid number";
    }
    return dayName;
}

int main()
{
    int response;
    cout << "Enter the day of the week: ";
    cin >> response;
    cout << getDayOfWeek(response) << endl;
    cout << getDayOfWeekWithSwitch(response) << endl;

    return 0;
}

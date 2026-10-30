#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    char genderCode;

    // Prompt the user
    cout << "Please enter your gender as F or M: ";
    cin >> genderCode;

    // Make and decision
    switch (genderCode)
    {
        case 'M':
        case 'm':
            cout << "You are Male";
        break;

        case 'F':
        case 'f':
            cout << "You are Female";
        break;

        default:
            cout << "Invalid";

    }

    return 0;
}

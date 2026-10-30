#include <iostream>
#include <string>

using namespace std;

int main(){

// Prompt the user for the input
    int time;
    cout << "Please enter time in minute(s): ";
    cin >> time;

    int timeInHours;
    int timeInMinutes;

    timeInHours = time /60;
    timeInMinutes = time % 60;


// Output the result clearly as hours and minutes
    cout << time << " minutes is equal to " << timeInHours << " hour(s) and " << timeInMinutes << " minute(s)." << endl;


    return 0;
}

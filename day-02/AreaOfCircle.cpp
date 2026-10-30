#include <iostream>
#include <string>

using namespace std;

int main(){

// Prompt the user for the input
    float radius;
    float area;
    const double PI = 3.14159265358979;

    cout << "Please enter the radius of the circle: ";
    cin >> radius;

// Calculate the area
    area = PI * radius * radius;


// Output the result of the area
    cout << "Radius is equal to: " << radius << "\tThe area is: " << area << endl;


    return 0;
}

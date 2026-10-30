#include <iostream>
#include <string>

using namespace std;

int main(){

// Prompt the user for the input
    float breadth;
    float lenth;
    float area;

    cout << "Please enter the breadth of the rectangle: ";
    cin >> breadth;
    cout << "Please enter the lenth of the rectangle: ";
    cin >> lenth;

    area = lenth * breadth;




// Output the result of the area
    cout << "Breadth is equal to: " << breadth << "\tLenth is equal to: " << lenth << "\tThe area is: " << area << endl;


    return 0;
}

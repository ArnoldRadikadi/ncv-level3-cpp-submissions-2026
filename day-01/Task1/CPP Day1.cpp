// Made with Blocks to C++
#include <iostream>
#include <string>

using namespace std;

int main() {
    string name = "";
    string Gender = "";
    cout << "What is your name?" << endl;
    getline(cin >> ws, name);
    cout << "What is your Gender?" << endl;
    getline (cin >> ws, Gender);
    cout << "Hello, " << name << endl;
    if (Gender == "M"){
        cout << "You are a clever Man" << endl;
    }
    if (Gender == "F"){
        cout << "You are a Lovely Lady" << endl;
    }
    return 0;
}

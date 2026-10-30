#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


void generateRandom(int &num1, int &num2);
int calcSum(int num1, int num2);
int calcDiff(int num1, int num2);
int calcProd(int num1, int num2);
double calcQuot(int num1, int num2);

int main()
{

    srand(static_cast<unsigned int>(time(0)));

    int n1, n2;
    char mathOp;

    generateRandom(n1, n2);

    cout << "Generated Random Numbers: " << n1 << " and " << n2 << endl;
    cout << "Enter one of the math operators (+, -, /, *): ";
    cin >> mathOp;


    switch (mathOp)
    {
        case '+':
            cout << "sumResult = " << calcSum(n1, n2) << endl;
            break;
        case '-':
            cout << "diffResult = " << calcDiff(n1, n2) << endl;
            break;
        case '*':
            cout << "prodResult = " << calcProd(n1, n2) << endl;
            break;
        case '/':
            cout << "qoutResult = " << calcQuot(n1, n2) << endl;
            break;
        default:
            cout << "The selected math operation is Invalid !!!" << endl;
            break;
    }

    return 0;
}


void generateRandom(int &num1, int &num2)
{
    num1 = rand() % 50 + 1;
    num2 = rand() % 50 + 1;
}

int calcSum(int num1, int num2)
{
    return num1 + num2;
}

int calcDiff(int num1, int num2)
{
    return num1 - num2;
}

int calcProd(int num1, int num2)
{
    return num1 * num2;
}

double calcQuot(int num1, int num2)
{
    return static_cast<double>(num1) / num2;
}

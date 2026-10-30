#include <iostream>

using namespace std;

int promptUser(int &num1, int &num2);
int calcSum(int num1, int num2);
int calcDiff(int num1, int num2);
int calcProd(int num1, int num2);
int calcQuot(int num1, int num2);

int main()
{
    int n1, n2;


    promptUser(n1, n2);


    calcSum(n1, n2);


    calcDiff(n1, n2);


    calcProd(n1, n2);


    calcQuot(n1, n2);

    return 0;
}



int promptUser(int &num1, int &num2)
{
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    return 0;
}

int calcSum(int num1, int num2)
{
    cout << "The sum of " << num1 << " and " << num2 << " = " << (num1 + num2) << endl;
    return 0;
}

int calcDiff(int num1, int num2)
{
    cout << "The difference between " << num1 << " and " << num2 << " = " << (num1 - num2) << endl;
    return 0;
}

int calcProd(int num1, int num2)
{
    cout << "The product of " << num1 << " and " << num2 << " = " << (num1 * num2) << endl;
    return 0;
}

int calcQuot(int num1, int num2)
{
    cout << "The quotient of " << num1 << " and " << num2 << " = " << (static_cast<double>(num1) / num2) << endl;

    return 0;
}

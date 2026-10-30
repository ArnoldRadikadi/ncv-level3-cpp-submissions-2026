#include <iostream>

using namespace std;

int main()
{
    // Declare variables
    int num, count, sum = 0, avg = 0;


    for(count = 1; count <= 5; count ++ )
    {
        //Prompt and get values
        cout << "Enter a number from 1 and 50 to calculate the average "<< endl;
        cout << "Enter number " << count << ": ";
        cin >> num;

        if (num > 0 && num <= 50)
        {
            // Accumulate
            sum += num;
        }
        else
        {
            cout << "Invalid number try again: !!!\n";
            count --;
        }
    }


    avg = sum/(count-1);

    cout << "The average is equal to = " << avg << endl;

    return 0;
}

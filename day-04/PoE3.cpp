#include <iostream>

using namespace std;


void populateArray(int arr[], int size);
int countEvens(const int arr[], int size);
void displayOdds(const int arr[], int size);
void sortArray(int arr[], int size);
void displayArray(const int arr[], int size);

int main()
{
    const int SIZE = 5;
    int numbers[SIZE];


    populateArray(numbers, SIZE);


    int evenCount = countEvens(numbers, SIZE);
    cout << "\nNumber of even numbers in the array: " << evenCount << endl;


    displayOdds(numbers, SIZE);


    sortArray(numbers, SIZE);


    displayArray(numbers, SIZE);

    return 0;
}


void populateArray(int arr[], int size)
{
    cout << "Enter " << size << " numbers:" << endl;
    for (int i = 0; i < size; i++)
    {
        cout << "Number " << i + 1 << ": ";
        cin >> arr[i];
    }
}


int countEvens(const int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 == 0)
        {
            count++;
        }
    }
    return count;
}


void displayOdds(const int arr[], int size)
{
    cout << "Odd numbers in the array: ";
    bool foundOdd = false;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] % 2 != 0)
        {
            cout << arr[i] << " ";
            foundOdd = true;
        }
    }
    if (!foundOdd)
    {
        cout << "None";
    }
    cout << endl;
}


void sortArray(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


void displayArray(const int arr[], int size)
{
    cout << "Sorted array values (ascending order): ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

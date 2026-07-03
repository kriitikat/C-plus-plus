#include <iostream>
using namespace std;

template <class T>
void bubbleSort(T arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <class T>
void display(T arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int intArr[] = {45, 12, 78, 23, 56};
    float floatArr[] = {4.5, 2.1, 9.8, 1.3, 6.7};
    char charArr[] = {'E', 'A', 'D', 'C', 'B'};

    cout << "Original Integer Array: ";
    display(intArr, 5);
    bubbleSort(intArr, 5);
    cout << "Sorted Integer Array: ";
    display(intArr, 5);

    cout << "\nOriginal Float Array: ";
    display(floatArr, 5);
    bubbleSort(floatArr, 5);
    cout << "Sorted Float Array: ";
    display(floatArr, 5);

    cout << "\nOriginal Character Array: ";
    display(charArr, 5);
    bubbleSort(charArr, 5);
    cout << "Sorted Character Array: ";
    display(charArr, 5);

    return 0;
}
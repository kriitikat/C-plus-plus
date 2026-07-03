#include <iostream>

void sort(int arr[], int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    cout << endl;
}

int main()
{
    int arr[] = {4, 9, 2, 7, 1};
    std::cout << "Sorting is:" << sort(arr, 5) << std::endl;
    return 0;
}

    int n1 = sizeof(intArr) / sizeof(intArr[0]);
    int n2 = sizeof(floatArr) / sizeof(floatArr[0]);
    int n3 = sizeof(charArr) / sizeof(charArr[0]);
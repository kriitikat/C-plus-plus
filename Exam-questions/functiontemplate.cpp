#include <iostream>
using namespace std;

template <class T>
T findMax(T arr[], int n) {
    T max = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    return max;
}

int main() {
    int a[] = {10, 25, 15, 40, 30};
    float b[] = {2.5, 7.8, 3.2, 9.6, 4.1};
int maximum = findMax(a,5);
float greatest = findMax(b,5);
    cout << "Maximum integer: "
         << maximum << endl;

    cout << "Maximum float: "
         << greatest << endl;

    return 0;
}
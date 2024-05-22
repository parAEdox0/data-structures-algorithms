#include <iostream>
using namespace std;

void printArray(int array[], int len)
{
    for (int i = 0; i < len; i++)
    {
        cout << array[i] << ", ";
    }
    cout << endl;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    int start = 0;
    int end = n - 1;

    while (start < end)
    {

        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }

    printArray(arr, n);

    return 0;
}
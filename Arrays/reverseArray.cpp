#include <iostream>
using namespace std;

void revArr(int nums[], int len)
{
    int reversed[len];
    int revIndex = 0;

    for (int i = len - 1; i >= 0; i--)
    {
        reversed[revIndex] = nums[i];
        revIndex++;
    }

    cout << "The reversed array is " << endl;
    for (int i = 0; i < len; i++)
    {
        cout << reversed[i] << ", ";
    }

    cout << endl;
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(int);

    revArr(arr, n);

    return 0;
}
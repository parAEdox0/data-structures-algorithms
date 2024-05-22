#include <iostream>
using namespace std;

int main()
{

    int arr[] = {2, 15, 8, 29, 20};
    int n = sizeof(arr) / sizeof(int);
    int largest = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    cout << "The largest element in the array is " << largest << endl;

    return 0;
}
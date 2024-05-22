#include <iostream>
using namespace std;

void funcArr(int *ptr)
{
    cout << ptr[1];
}

int main()
{

    int arr[] = {1, 2, 3, 4, 5};

    funcArr(arr);
    // when array is passed it is passed by ref so if any changes are made in the function it will reflect on the original array

    return 0;
}
#include <iostream>
using namespace std;

void changeA(int *ptr)
{
    cout << ptr << endl;
    cout << *ptr << endl;
    *ptr = 20;
    cout << *ptr << endl;
}

int main()
{
    int a = 10;
    changeA(&a);
    cout << "Original A = " << a;
    return 0;
}
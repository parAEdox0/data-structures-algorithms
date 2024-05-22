#include <iostream>
using namespace std;

int main()
{
    int n = 5;
    int val = 65;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << (char)val;
            val++;
        }
        cout << endl;
    }

    return 0;
}
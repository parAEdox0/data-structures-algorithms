#include <iostream>
using namespace std;

int maxSubarraySum(int arr[], int n)
{
    int maxSum = INT_MIN;
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            int sum = 0;
            for (int i = start; i <= end; i++)
            {
                sum += arr[i];
            }
            maxSum = max(sum, maxSum);
        }
    }
    return maxSum;
}

int main()
{
    int arr[] = {0, -1, -9, 7, 11, -2, 15};
    int n = sizeof(arr) / sizeof(int);
    cout << maxSubarraySum(arr, n);
}
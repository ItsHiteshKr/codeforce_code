#include <iostream>
#include <algorithm>
using namespace std;

int countSubarray(int arr[], int n, int k)
{

    return 0;
}

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        cout << countSubarray(arr, n, k) << '\n';
    }
    return 0;
}
#include <iostream>
#include <algorithm>
using namespace std;

int findMaxSandwich(int a, int b)
{
    if (b >= a)
    {
        return -1;
    }
    else
    {

        return min(a - b, b);
    }

    return 0;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int a, b;
        cin >> a >> b;
        cout << findMaxSandwich(a, b) << '\n';
    }
    return 0;
}
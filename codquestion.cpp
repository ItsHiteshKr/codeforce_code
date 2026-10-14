#include <iostream>
#include <algorithm>
using namespace std;

long long evaluateThirdNumber(long long a, long long b, long long c)
{

    long long mini = min(a, min(b, c));
    long long maxi = max(a, max(b, c));

    long long mid = a + b + c - mini - maxi;

    long long sum = mini + mid;

    if (maxi > sum)
    {
        maxi = sum;
    }

    return maxi - mini;
}
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << evaluateThirdNumber(a, b, c) << '\n';
    }
    return 0;
}
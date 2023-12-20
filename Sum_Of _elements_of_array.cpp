#include <iostream>
using namespace std;
int sum(int n, int arr[])
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return arr[0];
    }
    int ans = sum(n - 1, arr + 1);
    int sum = arr[0] + ans;
    return sum;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    sum(5, arr);
    return 0;
}
// you can only climb 1 or 2 stairs at a time
#include <iostream>
using namespace std;
int stairs(int n)
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    int ans = stairs(n - 1) + stairs(n - 2);
    return ans;
}
int main()
{
    int n;
    cout << "enter no of stairs to get no of ways to reach there";
    cin >> n;
    cout << stairs(n);
    return 0;
}
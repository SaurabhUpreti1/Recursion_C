#include <iostream>
using namespace std;
int powerof2(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return 2 * powerof2(n - 1);
}
int main()
{
    int n;
    cout << "till what power do you wanna see answer";
    cin >> n;
    cout << powerof2(n);

    return 0;
}
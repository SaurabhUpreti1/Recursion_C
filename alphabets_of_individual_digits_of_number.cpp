#include <iostream>
using namespace std;
int saydigit(int n, string arr[])
{
    if (n == 0)
    {
        return 0;
    }
    int a = n % 10;
    n = n / 10;
    saydigit(n, arr);
    cout << arr[a] << " ";
}
int main()
{
    int n;
    cin >> n;
    string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    saydigit(n, arr);
    return 0;
}
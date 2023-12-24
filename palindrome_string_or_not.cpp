#include <iostream>
using namespace std;
bool palindromestring(string n, int i, int j)
{
    if (i > j)
    {
        return true;
    }
    if (n[i] != n[j])
    {
        return false;
    }
    else
    {
        return palindromestring(n, i + 1, j - 1);
    }
}
int main()
{
    int i = 0;

    string name = "paapi";
    int j = name.length() - 1;
    cout << palindromestring(name, i, j);
}
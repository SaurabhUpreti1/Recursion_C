/* #include <iostream>
using namespace std;
void name(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "saurabh";
    name(i + 1, n);
}
int main()
{
    int n, i = 1;
    cin >> n;
    name(i, n);
    return 0;
} */

/* OR BY DEECLARING i IN FUNCTION AND ONLY CALLING FUNCTION AS name(n); */
#include <iostream>
using namespace std;
void name(int n)
{
    int i = 0;
    if (i == n)
    {
        return;
    }
    i++;

    cout << "saurabh";
    name(n - 1);
}
int main()
{
    int n;
    cin >> n;
    name(n);
    return 0;
}
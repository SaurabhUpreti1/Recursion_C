/* this is to print backward counting */

#include <iostream>
using namespace std;
int counting(int n)
{
    if (n == 0)
    {
        return 0;
    }
    cout << n << endl;
    counting(n - 1);
}
int main()
{
    int n;
    cin >> n;
    counting(n);
    return 0;
}

/* this is to print forward counting */
/*
#include <iostream>
using namespace std;
int counting(int n)
{
    if (n == 0)

        return 0;

    counting(n - 1);

    cout << n << endl;
}
int main()
{
    int n;
    cin >> n;
    counting(n);
    return 0;
} */

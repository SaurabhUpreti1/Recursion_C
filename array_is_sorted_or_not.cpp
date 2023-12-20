/* BY SIMPLE LOOP */

/* #include <iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 5, 2, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] <= arr[i + 1])
        {
            if (i == 4)
            {
                cout << "array is sorted";
                break;
            }
        }
        else
        {
            cout << "array is not sorted";
            break;
        }
    }
    return 0;
} */
/* BY USING RECURSIVE RELATION */
#include <iostream>
using namespace std;
bool issorted(int n, int arr[])
{
    if (n == 0 || n == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
    {
        return false;
    }
    else
    {
        bool ans = issorted(n - 1, arr + 1);
        return ans;
    }
}

int main()
{
    int arr[6] = {1, 2, 3, 5, 7, 6};
    cout << issorted(6, arr);
    return 0;
}
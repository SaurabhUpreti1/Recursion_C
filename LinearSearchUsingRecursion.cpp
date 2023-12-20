#include <iostream>
using namespace std;
bool linearsearch(int n, int arr[], int key)
{
    if (n == 0)
    {
        return false;
    }
    if (arr[0] == key)
    {
        return true;
    }
    bool ans = linearsearch(n - 1, arr + 1, key);
    return ans;
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    cout << linearsearch(5, arr, 6);
    return 0;
}
#include <iostream>
using namespace std;
void reverseString(string &name, int i, int j)
{
    if (i > j)
    {
        return;
    }
    swap(name[i], name[j]);
    i++;
    j--;
    reverseString(name, i, j);
}
int main()
{
    int i = 0;

    string name = "saurabh";
    int j = name.length() - 1;
    reverseString(name, i, j);
    cout << name;
    return 0;
}
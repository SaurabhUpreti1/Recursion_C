#include <iostream>
using namespace std;
void reverseString(string &name, int i, int j)
{
    if (i > j)
    {
        return;
    }
    swap(name[i], name[j]);
    reverseString(name, i++, j++);
}
int main()
{
    string name = "saurabh";
    reverseString(name, 0, name.length()-1);
    cout << name;
    return 0;
}

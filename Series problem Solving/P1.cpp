#include <iostream>
using namespace std;
char convert(char name)
{
    int i, j;
    for (i = 'a', j = 'A'; i <= 'z' && j <= 'Z'; i++, j++)
    {
        if (name == i) // lower case
            return j;
        if (name == j) // upper case
            return i;
    }
}
int main()
{
    char name;
    cout << "Enter your I/P: ";
    cin >> name;
    cout << convert(name);
}
#include <iostream>
using namespace std;
int main()
{
    int i = 1, sum = 0, n;
    cout << "Enter number for sum of N natural no.: ";
    cin >> n;
    do
    {
        sum = sum + i;
        cout << sum <<" "<<endl;
        i++;
    } while (i <= n);
}
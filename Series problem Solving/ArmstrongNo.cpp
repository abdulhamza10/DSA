#include <iostream>
#include <cmath>
using namespace std;
int countdigit(int num)
{
    int count = 0;
    while (num != 0)
    {
        count++;
        num /= 10;
    }
    return count;
}
int power(int base, int exp)
{
    int ans = 1;
    for (int i = 0; i < exp; i++)
        ans *= base;
    return ans;
}
bool armstrong(int num, int digit)
{
    int n = num, ans = 0, rem;
    while (num)
    {
        rem = num % 10;
        num /= 10;
        ans = ans + power(rem, digit);
    }
    if (ans == n)
        return 1;
    else
        return 0;
}
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int digit = countdigit(num);
    cout << armstrong(num, digit);
}
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int mul = 1, ans = 0, rem;
    while (num > 0)
    {
        // reminder
        rem = num % 10;
        // num ko devide kar do
        num /= 10;
        // ans
        ans += rem * mul;
        // mul
        mul *= 2;
    }
    cout << ans;
}
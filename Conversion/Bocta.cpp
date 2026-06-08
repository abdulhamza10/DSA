#include <iostream>
using namespace std;
int main()
{ // binary to octa
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int ans = 0, rem, mul = 1;
    while (num > 0)
    {
        // reminder
        rem = num % 10;
        // quotient
        num /= 10;
        // answer
        ans += rem * mul;
        // muiltiply
        mul *= 2;
    }
    cout << " decimal = " << ans << endl;
int decimal = ans;
{
int rem, ans = 0,mul = 1;
    while (decimal > 0)
{
    // Reminder
    rem = decimal % 8;
    // Quotient
    decimal/=8;
    // answer
ans += rem*mul; 
    // multiply
mul*= 10;
}
cout << " Octa = " << ans << endl;
}
}

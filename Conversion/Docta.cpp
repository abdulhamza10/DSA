#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter your number: ";
    cin >> num;
int rem, ans = 0,mul = 1;
    while (num > 0)
{
    // Reminder
    rem = num % 8;
    // Quotient
    num/=8;
    // answer
ans += rem*mul; 
    // multiply
mul*= 10;
}
cout<<ans<<endl;
}
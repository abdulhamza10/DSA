#include <iostream>
using namespace std;
int main()
{
    int n, ans = 0;
    cout << "Enter the number: ";
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        ans += a[i];
    }
    cout << ans;
}
// Secound Max
#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int arr[7] = {3, 6, 7, 4, 5, 2, 8};
    int ans = arr[0], ans2 = INT_MIN;
    for (int i = 0; i < 7; i++)
    {
        if (arr[i] > ans)

            ans = arr[i];
    }
    for (int i = 1; i < 7; i++)
    {
        if (ans > arr[i] && arr[i] > ans2)
        {
            ans2 = arr[i];
        }
    }

    cout << ans2;
}
#include <iostream>
using namespace std;
void fun(int arr[], int n) //Pointer
{
    for (int i = 0; i < 5; i++)
        cout << arr[i];
}
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
  fun(arr, 5);
}
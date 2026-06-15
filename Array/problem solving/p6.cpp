#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    int arr[n];

    // Input array first
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Store last element
    int temp = arr[n - 1];

    // Shift elements right
    for (int i = n - 2; i >= 0; i--) {
        arr[i + 1] = arr[i];
    }

    // Put last element at front
    arr[0] = temp;

    // Print array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
}
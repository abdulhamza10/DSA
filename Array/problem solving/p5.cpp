#include <iostream>
#include <vector>
using namespace std;

int missingNum(vector<int>& arr) {
    long long sum = 0;

    for (int i = 0; i < arr.size(); i++)
        sum += arr[i];

    long long n = arr.size() + 1;
    long long ans = n * (n + 1) / 2;

    return ans - sum;
}

int main() {
    int n;
    cin >> n;   // total numbers including missing one

    vector<int> arr(n - 1);

    for (int i = 0; i < n - 1; i++)
        cin >> arr[i];

    cout << missingNum(arr);
}
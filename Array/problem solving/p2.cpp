//Reverse Array
#include<iostream>
using namespace std;
int main()
{
int temp[6];
int arr[6] = {6,11,7,4,8,9};
int i=5,j=0;
while(i>=0)
{
temp[j] = arr[i];
j++;
i--;
}
// Copy temp back to arr
for(int k = 0;k<6;k++)
{
arr[k]=temp[k];
}
  // Print reversed array
for(int k = 0; k<6;k++)
{
cout<<arr[k]<<" ";
}
}
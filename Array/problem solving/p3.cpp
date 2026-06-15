//Reverse array m-2
#include<iostream>
 using namespace std;
int main()
{
int arr[6]={1,6,3,8,2,0};
int start = 0 , end = 5;
while(start<end)
{
   swap(arr[start],arr[end]);
start ++;
end--;
};
for(int i=0;i<6;i++)
cout<<arr[i]<<" ";
} 
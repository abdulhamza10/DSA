#include<iostream>
using namespace std;
int main()
{
int i,n;
cout<<"Enter the number: ";
cin>>n;
for(i=1;i<=n;i++)
{
 if(i%4 == 0)
continue;
cout<<i<<" ";
}
}
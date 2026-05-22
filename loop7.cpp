#include<iostream>
using namespace std;
int main()
{
int i,n,pow,num;
cout<<"enter the number: ";
cin>>n;
cout<<"enter the power: ";
cin>>pow;
num = 1;
for (i = 1; i <= pow; i++)
{
num = num*n;
}
cout<<num;
}
#include<iostream>
using namespace std;
int main()
{
int n;
 cout<<"enter your table : ";
cin>>n;
for(int i = 1 ; i <= 10 ; i++)
{
int table;
table = n*i;
cout<<n<<'*'<<i<<'='<<table<<"\n";
}
}
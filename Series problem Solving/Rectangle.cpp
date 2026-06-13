#include<iostream>
using namespace std;
int rectangle(int a,int b,int c,int d)
{
if((a==b && c==d) || (a==c && b==d) || (b==c && d==a))
return 1;
else
return 0;
}
int main()
{
int a,b,c,d;
cout<<"Enter the four number's: ";
cin>>a>>b>>c>>d;
cout<<rectangle(a,b,c,d);
}
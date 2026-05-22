//Author-Abdul Hamza
/*This is written on 17 of may 2026
   program to demonstrate Basic of structure of c++*/

#include<iostream>
#define pi 3.14

int r=2;
void area();

class Myclass
{
   public:
int a;
void display() 
{
std::cout<<"inside class"<<std::endl;
}
};
int main()
{
Myclass m;
m.a=90;
m.display();
area();
std::cout<<"hello world from main funtion!!"<<std::endl;
std::cout<<m.a<<std::endl;
return 0;
}
void area()
{
float area;
area=pi*r*r;
std::cout<<area<<std::endl;
}

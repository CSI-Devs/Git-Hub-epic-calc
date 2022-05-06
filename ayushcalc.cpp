#include<iostream>
using namespace std;
int main()
{
int a,b;
cout<<"ENTER 2 NUMBERS=";
cin>>a>>b;
cout<<"ENTER 1 FOR ADD 2 FOR SUB 3 FOR MULTIPLY AND 4 FOR DIVIDE";
int c;
cout<<c;
switch(c)
{
case 1:
cout<<a+b;
case 2:
cout<<a-b;
case 3:
cout<<a*b;
case 4:
cout<<a/b;
default:
cout<<"WRONG INPUT";
}
return 0;
}
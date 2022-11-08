/*1. Write a C++ program to demonstrate the use of try, catch block with the argument as an
integer and string using multiple catch blocks.*/

#include<iostream>
using namespace std;
int main()
{
int a,b,c;
cout<<"Enter the value of a and b"<<endl;
cin>>a>>b;
try
{
  if(b==0)
    throw "divide by zero is an error";
  if(b==1)
    throw b;
  if(b==2)
     throw exception();

c = a/b;
}
catch( const char* msg)
{
cout<<msg<<endl;
}
catch(int b)
{
 cout<<"b ki value 1 nhi ho sakti h"<<endl;
}
catch(...)
{
 cout<<" focus "<<endl;
}
cout<<"result = "<<c<<endl;

return 0;
}

//3. Write a C++ program to perform arithmetic operations on two numbers and throw an
//exception if the dividend is zero or does not contain an operator.
#include<iostream>
using namespace std;

int main()
{
int a,b,c;
cout<<"enter the number"<<endl;
cin>>a>>b;
try
{
if(a==0)
    throw "dividend is zero";
c = a/b;
}
catch( const char *msg)
{
cout<<msg<<endl;
}
cout<<"result = "<<c<<endl;

return 0;
}

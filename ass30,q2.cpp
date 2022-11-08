//2. Write a C++ program to demonstrate try, throw and catch statements.
#include<iostream>
using namespace std;

int main()
{
int a,b;
char c;
cout<<"Enter the value of c "<<endl;
cin>>c;
try
{
if(c == 'a')
    throw "don't waste your time ";
if( c == 'b')
    throw exception();

c ='a';
}
catch( const char *str)
{
cout<<str<<endl;
}
catch(...)
{
 cout<<" why are you wasting your time thinking all these stupid things"<<endl;
}
return 0;
}

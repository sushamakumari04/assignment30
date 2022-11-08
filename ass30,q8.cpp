/*8. Write a C++ program to accept a password and throw an exception if the password has
less than 6 characters or does not contain a digit or does not contain any special
character or does not contain any capital letter.*/
#include<iostream>
using namespace std;

int main()
{
int Count=0,flag=0,temp=0,point=0;
char str[20];
cout<<"Enter the password name"<<endl;
cin.getline(str,20);
for(int i=0;str[i];i++)
{ Count++; }
try
{
for(int i=0;str[i];i++)
{
  if(65<=str[i]&&str[i]<=90)
  { temp++; }
  else if(97<=str[i]&&str[i]<=122)
  { flag++; }
  else if(32<=str[i]||str[i]<=47|| 58<=str[i]|| str[i]<=64 || 91<=str[i]|| str[i]<=96 || 123<=str[i] || str[i]<=126)
  { point++ ; }
}
 if(Count>6 && temp>0 && flag>0 && point>0)
 {
  cout<<"valid username : "<<str<<endl;
 }
 else
 {
  throw "Invalid username ";
 }
}
catch(const char* a)
{
cout<<a<<endl;
}

return 0;
}

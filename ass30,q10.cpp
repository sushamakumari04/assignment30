//10. Write a C++ program to accept Nickname and throw an exception if it has greater than 8
//characters or does contain a digit or special symbol or space.
#include<iostream>
using namespace std;

int main()
{
int Count=0,temp=0,flag=0,point=0;
char str[20];
cout<<"Enter your nickname"<<endl;
cin.getline(str,20);
for(int i=0;str[i];i++)
{
  Count++;
 if(48<=str[i] && str[i]<=57)
 { temp++; }
 else if(32<=str[i] && str[i]<=47 || 58<=str[i] && str[i]<=64 || 91<=str[i] && str[i]<=96 || 123<=str[i] && str[i]<=126)
 { flag++; }
 else if(str[i]==40)
 { point++; }
}
try
{
 if(Count>8)
 {
   throw "Invalid nickname ,count greater than 8";
 }
 else if( temp>0)
 {
  throw "Invalid nickname, nickname contain digit";
 }
 else if( flag>0)
 {
  throw "Invalid nickname,nickname contain symbol";
 }
 else if( point>0)
 {
  throw "Invalid nickname,nicknamename contain space";
 }
 else
 {
  cout<<" valid nickname : "<<str<<endl;
 }

}
catch( const char* a)
{
 cout<<a<<endl;
}
return 0;
}

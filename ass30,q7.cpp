//7. Write a C++ program to accept a username if the username has less than 6 characters
//or does contain any digit or special symbol throw an exception.
#include<iostream>
using namespace std;

int main()
{
int Count =0;
char str[20];
cout<<"Enter the user name"<<endl;
cin.getline(str,20);
for(int i=0;str[i];i++)
 {
  Count++;}
try
{
 if(Count<6)
 {
 throw "Invalid username,username should be more than 6 characters";
 }
 for(int i=0;str[i];i++)
 {
   if(65<=str[i]&& str[i]<=90 || 97<=str[i]&&str[i]<=122)
   {
   }
   else{
     throw "Invalid username,username should not contain special characters and digits and any other symbol";
   }
 }
 cout<<"valid username : "<<str<<endl;;
}
catch(const char* a)
{
cout<<a<<endl;
}



return 0;
}

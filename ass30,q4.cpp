//4. Write a C++ program to accept an email address and throw an exception if it does not contain @ symbol.
#include<iostream>
using namespace std;

int main()
{
char str[20];
cout<<"Enter your email address "<<endl;
cin>>str;
try
{
int i;
for(i=0;str[i];i++)
{
 if(str[i]=='@')
 {
  break;
 }
 else
 {
   continue;
 }
}
if(str[i]=='\0')
    throw "email does not contain @ symbol,Invalid email";
  else
    printf(" your email is valid %s",str);
}

catch(const char*msg)
{
cout<<msg<<endl;
}

return 0;
}

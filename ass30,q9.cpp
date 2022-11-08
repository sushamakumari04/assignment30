//9. Write a C++ program to accept Gmail id only and throw an exception if the id does not contain @ and gmail.com.
#include<iostream>
using namespace std;
int main()
{
    int temp =0,Count=0;
char str[20];
char arr[11] = "gmail.com";
cout<<"Enter your gmail id"<<endl;
cin.getline(str,20);
for(int i=0;str[i];i++)
{
  if(str[i]=='@')
  {
     temp++;
  }
  else if( str[i]=="gmail.com")
  {
     Count++;
  }
}
try
{
  if(temp>0 && Count>0)
  {
   cout<<str<<endl;
  }
  else
  {
   throw "invalid gmail";
  }


}
catch( const char *aa)
{
 cout<<aa<<endl;
}

return 0;
}

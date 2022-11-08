//6. Write a C++ program to accept area pin code and throw an exception if it does not contain 6 digits.
#include<iostream>
using namespace std;

int main()
{
char arr[20];
int Count =0;
cout<<"Enter your 6 digit pin code number"<<endl;
cin.getline(arr,20);
try
{
 for(int i=0;arr[i];i++)
 {
  Count++;
 }
 if(Count<6||Count>6)
    throw "Invalid pin code number";
 else if(Count == 6)
 {
    printf(" valid pin code number %s",arr);
 }

}
catch(const char * a)
{
 cout<<a<<endl;
}

return 0;
}

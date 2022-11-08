//5. Write a C++ program to accept a mobile number and throw an exception if it does not contain 10 digits.
#include<iostream>
using namespace std;

int main()
{
char arr[20];
int Count =0;
cout<<"Enter your mobile number"<<endl;
cin.getline(arr,20);
try
{
 for(int i=0;arr[i];i++)
 {
  Count++;
 }
 if(Count<10||Count>10)
    throw "number does not contain 10 digits";
 else if(Count == 10)
 {
    printf(" valid number %s",arr);
 }

}
catch(const char * a)
{
 cout<<a<<endl;
}

return 0;
}

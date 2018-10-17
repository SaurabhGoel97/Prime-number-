
#include<iostream>
using namespace std;
int main()
{
 int a,s,d;
 cout<<"Enter number=";
 cin>>a;
 s=1;d=0;
 while(s<=a/2)
 {
  s++;
  if(a%s)
  {
    d=1;
    s=a;
  }
  else
   d=0;
  }
  if(d)
  cout<<"\nnumber is prime";
  else
  cout<<"\nNot a prime number";
return 0;
}

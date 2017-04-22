#include "BigInt.h"
#include <iostream>
using namespace std;
int main()
{
  string str1,str2;
  cout<<"Enter number a:";
  cin>>str1;
  cout<<"Enter number b:";
  cin>>str2;
  BigInteger a(str1),b(str2);
  cout<<a.number<<" + "<<b.number<<" = ";
  a.add(b);
  cout<<a.number<<"\n";
  return 0;
}

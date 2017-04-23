#include "BigInteger.h"
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
  string str1,str2;
  cin>>str1;
  cin>>str2;
  BigInt a(str1),b(str2);
  a.add(b);
  cout<<a.number<<"\n";
  return 0;
}

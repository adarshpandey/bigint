#include "BigInt.h" 

BigInteger::BigInteger(int n)
{
  std::stringstream ss;
  ss << n;
  number = ss.str();
}

BigInteger::BigInteger(std::string s)
{
  number = s;
}

void BigInteger::add(BigInteger &c)
{
  int carry=0,tmp;
  int i,j;
  for(i=number.length()-1,j=c.number.length()-1;i>-1 and j>-1;i--,j--)
  {
    tmp = (number[i]-48) + (c.number[j]-48) + carry;
    number[i] = (tmp%10) + 48;
    carry = tmp/10;
  } 
}

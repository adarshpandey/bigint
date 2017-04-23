#include "BigInteger.h" 

BigInt::BigInt(int n)
{
  std::stringstream ss;
  ss << n;
  number = ss.str();
}

BigInt::BigInt(std::string s)
{
  number = s;
}

void BigInt::add(BigInt &c)
{
  int carry=0,tmp;
  int i,j;
  for(i=number.length()-1,j=c.number.length()-1;i>-1 and j>-1;i--,j--)
  {
    tmp = (number[i]-48) + (c.number[j]-48) + carry;
    number[i] = (tmp%10) + 48;
    carry = tmp/10;
  }
  if(i>-1)
  {
    while(i>-1)
    {
      tmp = (number[i]-48) + carry;
      number[i] = (tmp%10) + 48;
      carry = tmp/10;
      i--;
    }
  }
  if(j>-1)
  {
    while(j>-1)
    {
      tmp = (c.number[j]-48) + carry;
      number.insert(0, 1, (tmp%10) + 48);
      carry = tmp/10;
      j--;
    }
  }
  if(carry)
  {
    number.insert(0, 1, carry+48);
  }
}

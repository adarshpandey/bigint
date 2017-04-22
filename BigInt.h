#include <sstream>
#include <string>

class BigInteger
{
  public:
    std::string number;
    BigInteger(int N);
    BigInteger(long N);
    BigInteger(long long N);
    BigInteger(std::string n_str);
    void add(BigInteger &c);
};

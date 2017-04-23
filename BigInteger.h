#include <sstream>
#include <string>

class BigInt
{
  public:
    std::string number;
    BigInt(int N);
    BigInt(long N);
    BigInt(long long N);
    BigInt(std::string n_str);
    void add(BigInt &c);
};

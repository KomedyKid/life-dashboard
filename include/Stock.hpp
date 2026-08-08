#include "Asset.hpp"
#include <string>
using namespace std;
class Stock : public Asset {

private:
  string ticker;
  string name;

public:
  void setTicker(string t);

  string getTicker();
};

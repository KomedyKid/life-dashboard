#include "priceHistory.hpp"

class Asset {

private:
  double value;
  priceHistory history;

public:
  double getValue() const;

  void setValue(double setValue);
};

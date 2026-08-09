#include <ctime>
#include <vector>
using namespace std;

class priceHistory {

private:
  struct pricePoint {
    time_t date;
    double price;
  };

  vector<pricePoint> dates;

  u_int size;

  void sort();

public:
  void insertPoint(pricePoint p);

  void deletePoint(time_t t);

  vector<pricePoint> returnPoints();
  vector<pricePoint> returnPoints(u_int x);
};

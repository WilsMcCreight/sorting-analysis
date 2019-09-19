#ifndef ARR_H
#define ARR_H
#include <vector>
#include <string>
using namespace std;

class Arr {
private:
  vector<int> v;

public:
  Arr();
  Arr(int vec_size);
  Arr(int vec_size, string mode);

  vector<int> get_vec() { return v; }
};

#endif

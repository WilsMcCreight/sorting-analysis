#ifndef ARR_H
#define ARR_H
#include <vector>
#include <string>
using namespace std;

class Arr {
private:
  vector<int> v;
  string mode;

public:
  Arr();
  Arr(int vec_size);
  Arr(int vec_size, string gen_type);

  vector<int> get_vec() { return v; }
  string get_mode() { return mode; }

  void set_vec(vector<int> new_vector);
  void set_mode(string gen_type);
};

#endif

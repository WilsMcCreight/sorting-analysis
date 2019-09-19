#include <iostream>
#include "print_array.h"
#include "arr.h"

void print_array(Arr arr) {
  vector<int> v = arr.get_vec();
  cout << "[";
  if (v.size() > 0) {
    cout << v[0];
    for(int i = 1; i < v.size(); i++) {
      cout << ", " << v[i];
    }
  }
  cout << "]\n";
}

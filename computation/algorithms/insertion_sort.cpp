#include "insertion_sort.h"
#include "../helpers/arr.h"


Arr insertion_sort(Arr arr) {
  bool working = true;
  vector<int> vec = arr.get_vec();
  while(working) {
    working = false;
    if (vec.size() > 1) {
      for(int i = 0; i < vec.size() - 1; i++) {
        if (vec[i] > vec[i+1]) {
          int temp = vec[i];
          vec[i] = vec[i+1];
          vec[i+1] = temp;
          working = true;
        }
      }
    }
  }
  Arr sorted = Arr();
  sorted.set_vec(vec);
  return sorted;
}

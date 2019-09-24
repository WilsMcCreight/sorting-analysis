#include "insertion_sort.h"
#include "../helpers/arr.h"


Arr insertion_sort(Arr arr) {

  vector<int> vec = arr.get_vec();
  int j, swap;

  for(int i = 1; i < vec.size(); i++) {
    j = i;
    while(vec[j] < vec[j-1]) {
      swap = vec[j-1];
      vec[j-1] = vec[j];
      vec[j] = swap;
    }
  }

  Arr sorted = Arr();
  sorted.set_vec(vec);
  return sorted;
}

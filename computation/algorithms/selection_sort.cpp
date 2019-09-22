#include "selection_sort.h"
#include "../helpers/arr.h"


Arr selection_sort(Arr arr) {
  vector<int> vec = arr.get_vec();
  int min_num, min_index, swap;
  for(int i = 0; i < vec.size() - 1; i++) {
    min_num = vec[i];
    min_index = i;
    for(int j = i + 1; j < vec.size(); j ++) {
      if(vec[j] < min_num) {
        min_index = j;
        min_num = vec[j];
      }
    }
    swap = vec[i];
    vec[i] = min_num;
    vec[min_index] = swap;

  }
  Arr sorted = Arr();
  sorted.set_vec(vec);
  return sorted;
}

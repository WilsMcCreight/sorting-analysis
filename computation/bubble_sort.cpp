// #include <iostream>
// using namespace std;
#include "arr.h"


Arr bubble_sort(Arr arr) {
  bool working = true;
  vector<int> vec = arr.get_vec();
  while(working) {
    working = false;
    // if (print) {
    //   print_array(arr, arr_size);
    // }
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
  // if (print) {
  //   print_array(arr, arr_size);
  // }
  return arr;
}

#include <iostream>
#include "arr.h"
#include "bubble_sort.h"
using namespace std;

int main () {

  Arr rand_arr = Arr(50, "random");
  Arr asc_arr = Arr(50, "ascending");
  Arr desc_arr = Arr(50, "descending");
  // Arr all_arr = (50, "all");

  // time_start
  Arr temp;
  // cout >> rand_arr.get_vec();
  temp = bubble_sort(rand_arr);
  // time_end
  // time_start
  // bubble_sort(desc_arr);
  // time_end
  // time_start
  // bubble_sort(rand_arr);
  // time_end

  // time_start
  // selection_sort(asc_arr);
  // time_end
  // time_start
  // selection_sort(desc_arr);
  // time_end
  // time_start
  // selection_sort(rand_arr);
  // time_end

  // time_start
  // insertion_sort(asc_arr);
  // time_end
  // time_start
  // insertion_sort(desc_arr);
  // time_end
  // time_start
  // insertion_sort(rand_arr);
  // time_end

  // time_start
  // quick_sort(asc_arr);
  // time_end
  // time_start
  // quick_sort(desc_arr);
  // time_end
  // time_start
  // quick_sort(rand_arr);
  // time_end


  // cout << rand_arr.get_array();




  return 0;
}

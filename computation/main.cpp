#include <iostream>
#include "helpers/arr.h"
#include "helpers/print_array.h"
#include "algorithms/bubble_sort.h"
using namespace std;

int main () {

  Arr rand_arr = Arr(20, "random");
  Arr asc_arr = Arr(20, "ascending");
  Arr desc_arr = Arr(20, "descending");
  // Arr all_arr = (50, "all");

  // time_start
  Arr sorted_arr = bubble_sort(rand_arr);
  print_array(sorted_arr);
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

  return 0;
}

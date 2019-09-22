#include <iostream>
#include <ctime>
#include <vector>
#include "helpers/arr.h"
#include "helpers/print_array.h"
#include "algorithms/bubble_sort.h"
#include "algorithms/selection_sort.h"
using namespace std;

int main () {
  int num_arrays = 50;
  int array_size = 100;
  clock_t time_start;

  vector<clock_t> bub_rand_times, sel_rand_times;
  bub_rand_times.resize(num_arrays);
  sel_rand_times.resize(num_arrays);

  Arr rand_arr, sorted_arr;

  for(int i = 0; i < num_arrays; i++) {
    rand_arr = Arr(array_size, "random");
    // Arr asc_arr = Arr(array_size, "ascending");
    // Arr desc_arr = Arr(array_size, "descending");

    time_start = clock();
    sorted_arr = bubble_sort(rand_arr);
    bub_rand_times[i] = time_start - clock();

    time_start = clock();
    sorted_arr = selection_sort(rand_arr);
    sel_rand_times[i] = time_start - clock();
    // bub_ran_time = time_start = clock();
  }

  // cout << bub_rand_times;
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

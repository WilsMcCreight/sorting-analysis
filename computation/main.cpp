#include <iostream>
#include <ctime>
#include <vector>
#include <fstream>
#include "helpers/arr.h"
#include "helpers/print_array.h"
#include "algorithms/bubble_sort.h"
#include "algorithms/insertion_sort.h"
#include "algorithms/selection_sort.h"
using namespace std;

int main () {
  int num_arrays = 20;
  int array_size = 10;
  clock_t time_start;
  ofstream myfile;
  myfile.open("outputs/data/bubble_sort_times.csv");
  myfile << "ID, bub_rand_10, bub_rand_100, bub_rand_1000, bub_rand_10000, bub_asc_10, bub_asc_100, bub_asc_1000, bub_asc_10000, bub_desc_10, bub_desc_100, bub_desc_1000, bub_desc_1000\n";

  vector<clock_t> bub_rand_timesI, bub_rand_timesII, bub_rand_timesIII, bub_rand_timesIV;
  vector<clock_t> bub_asc_timesI, bub_asc_timesII, bub_asc_timesIII, bub_asc_timesIV;
  vector<clock_t> bub_desc_timesI,  bub_desc_timesII,  bub_desc_timesIII,  bub_desc_timesIV;
  bub_rand_timesI.resize(num_arrays);
  bub_rand_timesII.resize(num_arrays);
  bub_rand_timesIII.resize(num_arrays);
  bub_rand_timesIV.resize(num_arrays);
  bub_asc_timesI.resize(num_arrays);
  bub_asc_timesII.resize(num_arrays);
  bub_asc_timesIII.resize(num_arrays);
  bub_asc_timesIV.resize(num_arrays);
  bub_desc_timesI.resize(num_arrays);
  bub_desc_timesII.resize(num_arrays);
  bub_desc_timesIII.resize(num_arrays);
  bub_desc_timesIV.resize(num_arrays);

  Arr rand_arr, asc_arr, desc_arr, sorted_arr;

  //Run bubble sort tests (10)
  for(int i = 0; i < num_arrays; i++) {
    rand_arr = Arr(array_size, "random");
    asc_arr = Arr(array_size, "ascending");
    desc_arr = Arr(array_size, "descending");

    time_start = clock();
    sorted_arr = bubble_sort(rand_arr);
    bub_rand_timesI[i] = time_start - clock();

    time_start = clock();
    sorted_arr = bubble_sort(rand_arr);
    bub_asc_timesI[i] = time_start - clock();

    time_start = clock();
    sorted_arr = bubble_sort(desc_arr);
    bub_desc_timesI[i] = time_start - clock();
  }

  array_size = array_size * 10;

  for(int i = 0; i < num_arrays; i++) {
    rand_arr = Arr(array_size, "random");
    asc_arr = Arr(array_size, "ascending");
    desc_arr = Arr(array_size, "descending");

    time_start = clock();
    sorted_arr = bubble_sort(rand_arr);
    bub_rand_timesII[i] = time_start - clock();

    time_start = clock();
    sorted_arr = bubble_sort(rand_arr);
    bub_asc_timesII[i] = time_start - clock();

    time_start = clock();
    sorted_arr = bubble_sort(desc_arr);
    bub_desc_timesII[i] = time_start - clock();
  }

  array_size = array_size * 10;

  for(int i = 0; i < num_arrays; i++) {
    rand_arr = Arr(array_size, "random");
    asc_arr = Arr(array_size, "ascending");
    desc_arr = Arr(array_size, "descending");

    time_start = clock();
    sorted_arr = bubble_sort(rand_arr);
    bub_rand_timesIII[i] = time_start - clock();

    time_start = clock();
    sorted_arr = bubble_sort(rand_arr);
    bub_asc_timesIII[i] = time_start - clock();

    time_start = clock();
    sorted_arr = bubble_sort(desc_arr);
    bub_desc_timesIII[i] = time_start - clock();
  }

  array_size = array_size * 10;

  for(int i = 0; i < num_arrays; i++) {
    rand_arr = Arr(array_size, "random");
    asc_arr = Arr(array_size, "ascending");
    desc_arr = Arr(array_size, "descending");

    time_start = clock();
    sorted_arr = bubble_sort(rand_arr);
    bub_rand_timesIV[i] = time_start - clock();

    time_start = clock();
    sorted_arr = bubble_sort(rand_arr);
    bub_asc_timesIV[i] = time_start - clock();

    time_start = clock();
    sorted_arr = bubble_sort(desc_arr);
    bub_desc_timesIV[i] = time_start - clock();
  }



  for(int k = 0; k < num_arrays; k++) {
    myfile << k << ", " << ((float)bub_rand_timesI[k])/CLOCKS_PER_SEC << ", " << ((float)bub_rand_timesII[k])/CLOCKS_PER_SEC << ", " << ((float)bub_rand_timesIII[k])/CLOCKS_PER_SEC << ", " << ((float)bub_rand_timesIV[k])/CLOCKS_PER_SEC;
    myfile << ", " << ((float)bub_asc_timesI[k])/CLOCKS_PER_SEC << ", " << ((float)bub_asc_timesII[k])/CLOCKS_PER_SEC << ", " << ((float)bub_asc_timesIII[k])/CLOCKS_PER_SEC << ", " << ((float)bub_asc_timesIV[k])/CLOCKS_PER_SEC;
    myfile << ", " << ((float)bub_desc_timesI[k])/CLOCKS_PER_SEC << ", " << ((float)bub_desc_timesII[k])/CLOCKS_PER_SEC << ", " << ((float)bub_desc_timesIII[k])/CLOCKS_PER_SEC << ", " << ((float)bub_desc_timesIV[k])/CLOCKS_PER_SEC << "\n";
  }

  myfile.close();
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

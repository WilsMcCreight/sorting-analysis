#include <iostream>
using namespace std;

int main () {
  int arr_size = 20;
  int arr[arr_size];

  srand(time(NULL));

  for(int i = 0; i < arr_size; i++) {
    arr[i] = rand() % arr_size + 1;
  }

  bool print = false;
  // bubble_sort(arr, arr_size, print);



  return 0;
}

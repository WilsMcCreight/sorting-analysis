#include <iostream>
// #include <string>
// #include <stddef.h>
#include "arr.h"
using namespace std;

Arr::Arr() {
  int vec_size = 20;
  v.resize(vec_size);

  srand(time(NULL));

  for(int i = 0; i < vec_size; i++) {
    v[i] = rand() % vec_size + 1;
  }
}

Arr::Arr(int vec_size) {
  v.resize(vec_size);

  srand(time(NULL));

  for(int i = 0; i < vec_size; i++) {
    v[i] = rand() % vec_size + 1;
  }
}

Arr::Arr(int vec_size, string mode) {
  v.resize(vec_size);

  srand(time(NULL));

  for(int i = 0; i < vec_size; i++) {
    v[i] = rand() % vec_size + 1;
  }
}

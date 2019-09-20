#include <iostream>
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

Arr::Arr(int vec_size, string gen_type) {
  set_mode(gen_type);
  v.resize(vec_size);

  srand(time(NULL));

  for(int i = 0; i < vec_size; i++) {
    v[i] = rand() % vec_size + 1;
  }
}

void Arr::set_vec(vector<int> new_vector) {
  v = new_vector;
}

void Arr::set_mode(string gen_type) {
  mode = gen_type;
}

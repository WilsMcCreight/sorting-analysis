



class Arr {
  public:
  Arr() { //Default constructor
    int arr_size = 20;
    int arr[arr_size];

    srand(time(NULL));

    for(int i = 0; i < arr_size; i++) {
      arr[i] = rand() % arr_size + 1;
    }
  }

  Arr(int arr_size) {

  }


}

#include "header.h"

bool kiemTraSoNguyenTo(int number) {
  bool flag = false;
  int count = 0;

  if (number < 2) {
    flag = false;
  } else {
    for (int i = 2; i <= number / 2; i++) {
      if (number % i == 0) {
        count++;
      }
    }
    if (count == 0) {
      flag = true;
    }
  }
  return flag;
}

void nhapMang(int array[]) {
  int arrayLenght = 0;
  cout << "\nNhập độ dài của mảng một chiều";
  cin >> arrayLenght;

  for (int i = 0; i < arrayLenght; i++) {
    cout << "array[" << i << "]: ";
    cin >> array[i];
  }
}

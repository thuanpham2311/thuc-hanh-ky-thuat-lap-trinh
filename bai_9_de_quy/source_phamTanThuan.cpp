#include "header.h"

int xuatGiaiThua(int number) {
  if (number == 0 || number == 1) {
    return 1;
  } else {
    return number * xuatGiaiThua(number - 1);
  }
}

int xuatPhanTuNfibonaci(int number) {
  if (number == 0) {
    return 0;
  } else if (number == 1 || number == 2) {
    return 1;
  } else {
    return xuatPhanTuNfibonaci(number - 1) + xuatPhanTuNfibonaci(number - 2);
  }
}

int xuatTongTangDan(int number) {
  if (number == 0) {
    return 0;
  } else {
    return number + xuatTongTangDan(number - 1);
  }
}

int xuatTongMu2TangDan(int number) {
  // int sum = 0;
  // for (int i = 1; i < number + 1; i++) {
  // sum += pow(i, 2);
  // }
  // return sum;
  if (number == 1) {
    return 1;
  } else {
    return pow(xuatTongTangDan(number - 1), 2);
  }
}

// int xuatMau2muN(int nubmer) {
// if (number == 1) {
// return 1;
// } else {
// return 1 / pow(2, xuatMau2muN(n));
// }
// }

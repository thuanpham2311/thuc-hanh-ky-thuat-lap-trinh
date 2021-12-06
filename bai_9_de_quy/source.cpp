#include "header.h"

int xuatGiaiThua(int number) {
  if (number == 0 || number == 1) {
    return 1;
  }
  return number * xuatGiaiThua(number - 1);
}

int xuatPhanTuNfibonaci(int number) {
  if (number == 0) {
    return 0;
  } else if (number == 1 || number == 2) {
    return 1;
  }
  return xuatPhanTuNfibonaci(number - 1) + xuatPhanTuNfibonaci(number - 2);
}

int xuatTongTangDan(int number) {
  return xuatTongTangDan(number - 1) + xuatTongTangDan(number - 2);
}

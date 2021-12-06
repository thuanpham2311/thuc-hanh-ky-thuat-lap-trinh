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

// @todo why n = 4 -> s = 36 != 30
// @body @thuanpham2311
int xuatTongMu2TangDan(int number) {
  if (number == 0) {
    return 0;
  } else {
    return xuatTongTangDan(number - 1) * xuatTongTangDan(number - 1);
  }
}

float xuatMau2muN(int number) {
  if (number == 1) {
    return 1;
  } else {
    return 1.0 / 2 * xuatMau2muN(number - 1);
  }
}

#include "header.h"

void nhapMang(Array &a) {
  cout << "\n Nhập số lượng phần tử của mảng: ";
  cin >> a.n;
  for (int i = 0; i < a.n; i++) {
    cout << "\narray[" << i << "]: ";
    cin >> a.data[i];
  }
}

bool kiemTraSoNguyenTo(int x) {
  if (x < 2) {
    return false;
  } else {
    for (int i = 2; i < x / 2; i++) {
      if (x % i == 0) {
        return false;
      }
    }
  }
  return true;
}

int xuatSoNguyenToLonNhat(Array a) {
  int max = -1;
  for (int i = 1; i < a.n; i++) {
    if (kiemTraSoNguyenTo(a.data[i]) && a.data[i] > max) {
      max = a.data[i];
    }
  }
  return max;
}

void nhapMaTran(Matrix &a) {
  cout << "\n số dòng của ma trận: ";
  cin >> a.row;
  cout << "\n số cột của ma trận: ";
  cin >> a.col;
  for (int i = 0; i < a.row; i++) {
    for (int j = 0; j < a.col; j++) {
      cout << "matrix[" << i << "][" << j << "]: ";
      cin >> a.data[i][j];
    }
  }
}

int xuatGiaTriXuatHienNhieuNhatTrongMaTran(Matrix a) {
  int countTmp = 0;
  int count = 0;
  int top;
}

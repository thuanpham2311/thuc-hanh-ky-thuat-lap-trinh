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

int xuatGiaTriXuatHienNhieuNhatTrongMaTran(Matrix x) {
  int countTmp = 0;
  int count = 0;
  int top;
  for (int i = 0; i < x.row; i++) {
    for (int j = 0; j < x.col; j++) {
      for (int a = i; a < x.row; a++) {
        for (int b = j; b < x.col; b++) {
          if (x.data[i][j] == x.data[a][b]) {
            countTmp++;
          }
        }
      }
      if (countTmp > count) {
        top = x.data[i][j];
        count = countTmp;
      }
      countTmp = 0;
    }
  }
  return top;
}

bool kiemTraCoGiaTriLapLaiTrongMaTran(Matrix x) {
  int countTmp = 0;
  int top;
  for (int i = 0; i < x.row; i++) {
    for (int j = 0; j < x.col; j++) {
      for (int a = i; a < x.row; a++) {
        for (int b = j; b < x.col; b++) {
          if (x.data[i][j] == x.data[a][b]) {
            countTmp++;
          }
        }
      }
      if (countTmp > 1) {
        return true;
      }
      countTmp = 0;
    }
  }
  return false;
}

void chuanHoaChuoi(string x) {
  for (int i = 0; i < x.length(); i++) {
    if (x[0] == ' ') {
      x.erase(x.begin());
    }
    if (x[i] == ' ' && x[i + 1] == ' ') {
      x.erase(x.begin() + i);
    }
    if (x[i] == '\0' && x[i - 1] == ' ') {
      x.erase(x.begin() - 1);
    }
  }
}

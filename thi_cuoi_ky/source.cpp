#include "header.h"

int nhapSoNguyenDuong(int &n) {
  do {
    cin >> n;
  } while (n <= 0);

  return n;
}

void nhapDaySo(DaySo &a) {
  cout << "\nSố lượng phần tử của dẫy số: ";
  nhapSoNguyenDuong(a.n);
  for (int i = 0; i < a.n; i++) {
    cout << "\n[" << i << "]: ";
    cin >> a.list[i];
  }
}

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

int xuatSoNguyenToLonNhat(DaySo a) {
  int max = -1;

  for (int i = 0; i < a.n; i++) {
    if (kiemTraSoNguyenTo(a.list[i]) == true && a.list[i] > max) {
      max = a.list[i];
    }
  }

  return max;
}

void nhapMaTran(Matrix &matrix) {
  cout << "\n Nhập số dòng của ma trận: ";
  cin >> matrix.row;
  cout << "\n Nhập số cột của ma trận: ";
  cin >> matrix.col;

  for (int i = 0; i < matrix.row; i++) {
    for (int j = 0; j < matrix.col; j++) {
      cout << "matrix[" << i << "][" << j << "]: ";
      cin >> matrix.data[i][j];
    }
  }
}

bool kiemTraCoSoLapLaiTrongMaTran(Matrix matrix) {
  for (int i = 0; i < matrix.row; i++) {
    for (int j = 0; j < matrix.col; j++) {
      for (int a = i + 1; a < matrix.row; a++) {
        for (int b = j + 1; b < matrix.col; b++) {
          if (matrix.data[i][j] == matrix.data[a][b]) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

int timGiaTriXuatHienNhieuNhat(Matrix matrix) {
  int count = 0;
  int countTmp = 0;
  int repeat;
  for (int i = 0; i < matrix.row; i++) {
    for (int j = 0; j < matrix.col; j++) {
      for (int a = i + 1; a < matrix.row; a++) {
        for (int b = j + 1; b < matrix.col; b++) {
          if (matrix.data[i][j] == matrix.data[a][b]) {
            countTmp++;
          }
          if (countTmp > count) {
            repeat = matrix.data[i][j];
            count = countTmp;
          }
          countTmp = 0;
        }
      }
    }
  }
  return repeat;
}

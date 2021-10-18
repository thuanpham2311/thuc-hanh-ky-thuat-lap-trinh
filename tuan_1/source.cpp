#include "header.h"

int nhapSoNguyenDuong(int &n) {
  do {
    cout << "\nnhập so nguyên dương: ";
    cin >> n;
  } while (n <= 0);

  return n;
}

bool kiemTraLuyThuaCoSo2(int n) {
  bool flag = false;
  for (int i = 1; i < n; i++) {
    if (n == pow(2, i)) {
      flag = true;
      break;
    }
  }
  return flag;
}

bool kiemTraSoNguyenTo(int number) {
  bool flag = false;
  int count = 0;

  if (number < 2 || number > 100) {
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

void xuatNSoNguyenToDauTien(int number) {
  int count = 0;
  int i = 2;
  cout << "Day so " << number << " so nguyen to dau tien: ";
  while (count != number | i > 100) {
    if (kiemTraSoNguyenTo(i) == true) {
      count++;
      cout << "\n - [" << count << "]: " << i;
    }
    i++;
  }
}

void xuatSoNguyenToBeHonBangN(int number) {
  int i = 2;
  cout << "Day so nguyen to be ≤: " << number;
  while (i <= number || i > 100) {
    if (kiemTraSoNguyenTo(i) == true) {
      cout << "\n - " << i;
    }
    i++;
  }
}

bool kiemTraSoHoangThien(int number) {
  int sum = 0;
  int flag = false;

  for (int i = 1; i < number; i++) {
    if (number % i == 0) {
      sum += i;
    }
  }

  if (sum == number) {
    flag = true;
  } else {
    flag = false;
  }

  return flag;
}

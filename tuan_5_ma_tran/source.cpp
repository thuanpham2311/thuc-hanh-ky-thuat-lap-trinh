#include "header.h"

int nhapSoNguyenDuong(int &n) {
  do {
    cin >> n;
  } while (n <= 0);

  return n;
}

void nhapMaTranVuong(MaTranVuong &a) {
  cout << "Nhập bật của ma trận vuông (≤10): ";
  nhapSoNguyenDuong(a.n);
  for (int i = 0; i < a.n; i++) {
    for (int j = 0; j < a.n; j++) {
      cout << "[" << i << "][" << j << "]: ";
      cin >> a.list[i][j];
    }
  }
}

void nhapMaTranVuong(int a[][], int n) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << "[" << i << "][" << j << "]: ";
      cin >> a[i][j];
    }
  }
}

void xuatMaTranVuong(MaTranVuong a) {
  for (int i = 0; i < a.n; i++) {
    for (int j = 0; j < a.n; j++) {
      cout << a.list[i][j] << " ";
    }
    cout << endl;
  }
}

int xuatTongDuongCheoChinh(MaTranVuong a) {
  int sum = 0;
  for (int i = 0; i < a.n; i++) {
    sum += a.list[i][i];
  }
  return sum;
}

int xuatTongDuongCheoPhu(MaTranVuong a) {
  int sum = 0;

  for (int i = 0; i < a.n; i++) {
    sum += a.list[i][a.n - 1 - i];
  }

  return sum;
}

void xuatTamGiaTrenTrai(MaTranVuong a) {
  for (int i = 0; i < a.n; i++) {
    for (int j = 0; j < (a.n - i); j++) {
      cout << a.list[i][j] << " ";
    }
    cout << endl;
  }
}

bool kiemTraMaTranDoiXung(MaTranVuong a) {
  for (int i = 0; i < a.n; i++) {
    for (int j = 0; j < a.n; j++) {
      if (a.list[i][j] != a.list[j][i]) {
        return false;
      }
    }
  }
  return true;
}

void xuatTamGiacTrenPhai(MaTranVuong a) {
  for (int i = 0; i < a.n; i++) {
    for (int j = 0; j < a.n; j++) {
      if (i <= j) {
        cout << a.list[i][j] << " ";
      } else {
        cout << " "
             << " ";
      }
    }
    cout << endl;
  }
}

void xuatTamGiacDuoiPhai(MaTranVuong a) {
  for (int i = 0; i < a.n; i++) {
    for (int j = 0; j < a.n; j++) {
      if (i + j <= a.n - 2) {
        cout << " "
             << " ";
      } else {
        cout << a.list[i][j] << " ";
      }
    }
    cout << endl;
  }
}

bool kiemTraPhanTuAmTamGiacDuoiPhai(MaTranVuong a) {
  for (int i = 0; i < a.n; i++) {
    for (int j = 0; j < a.n; j++) {
      if (i + j <= a.n - 2) {
      } else {
        if (a.list[i][j] < 0) {
          return true;
        }
      }
    }
    cout << endl;
  }
  return false;
}

void xuatMaTranChuyenVi(MaTranVuong a) {
  MaTranVuong b;
  b.n = a.n;
  for (int i = 0; i < a.n; i++) {
    for (int j = 0; j < a.n; j++) {
      if (i != j) {
        b.list[j][i] = a.list[i][j];
        b.list[i][j] = a.list[j][i];
      } else {
        b.list[i][j] = a.list[i][j];
      }
    }
  }
  xuatMaTranVuong(b);
}

int xuatPhanTuLonNhatTamGiaTrenTrai(MaTranVuong a) {
  int max = a.list[0][0];
  for (int i = 0; i < a.n; i++) {
    for (int j = 0; j < (a.n - i); j++) {
      if (a.list[i][j] > max) {
        max = a.list[i][j];
      }
    }
  }
  return max;
}

int soDuongLonNhat(MaTranVuong a) {
  int max = a.mtv[0][0];
  for (int i = 0; i < a.bac; i++) {
    for (int j = 0; j < (a.bac - i); j++) {
      if (a.mtv[i][j] > max) {
        max = a.mtv[i][j];
      }
    }
  }
  return max;
}

void swap(int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void bubbleSort(int array[], int n) {
  int i, j;
  for (i = 0; i < n - 1; i++)
    for (j = 0; j < n - i - 1; j++)
      if (array[j] > array[j + 1]) {
        swap(array[j], array[j + 1]);
      }
}

void xuatDuongCheoPhuGiamDan(MaTranVuong a) {
  int array[a.n];

  for (int i = 0; i < a.n; i++) {
    array[i] = a.list[i][a.n - 1 - i];
  }

  bubbleSort(array, a.n);

  for (int i = a.n - 1; i >= 0; i--) {
    cout << array[i];
  }
}

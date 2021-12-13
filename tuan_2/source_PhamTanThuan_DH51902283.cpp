#include "header_PhamTanThuan_DH51902283.h"

int nhapSoNguyenDuong(int &n) {
  do {
    cin >> n;
  } while (n <= 0);

  return n;
}

void nhapDaySo(DAYSO &array) {
  cout << "Nhập dãy số phần tử: ";
  nhapSoNguyenDuong(array.n);

  for (int i = 0; i < array.n; i++) {
    cout << "a[" << i << "] = ";
    cin >> array.list[i];
  }
}

void xuatDS(DAYSO array) {
  cout << "\n";
  for (int i = 0; i < array.n; i++) cout << array.list[i] << " ";
  cout << "\n";
}

int diemPhanTuChiaHet3Va5(DAYSO array) {
  int count = 0;

  for (int i = 0; i < array.n; i++) {
    if (array.list[i] % 3 == 0 && array.list[i] % 5 == 0) {
      count++;
    }
  }

  return count;
}

int diemPhanTuAm(DAYSO array) {
  int count = 0;

  for (int i = 0; i < array.n; i++) {
    if (array.list[i] < 0) {
      count++;
    }
  }

  return count;
}

int diemPhanTuDuong(DAYSO array) {
  int count = 0;

  for (int i = 0; i < array.n; i++) {
    if (array.list[i] > 0) {
      count++;
    }
  }

  return count;
}

int diemPhanTuBang0(DAYSO array) {
  int count = 0;

  for (int i = 0; i < array.n; i++) {
    if (array.list[i] == 0) {
      count++;
    }
  }

  return count;
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

int tongPhanTuSoNguyenTo(DAYSO array) {
  int sum = 0;

  for (int i = 0; i < array.n; i++) {
    if (kiemTraSoNguyenTo(array.list[i]) == true) {
      sum += array.list[i];
    }
  }

  return sum;
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

int diemPhanTuHoangThien(DAYSO array) {
  int count = 0;

  for (int i = 0; i < array.n; i++) {
    if (kiemTraSoHoangThien(array.list[i]) == true) {
      count++;
    }
  }

  return count;
}

bool kiemTraTangDan(DAYSO array) {
  int flag = false;
  int ahihi = array.list[0];

  for (int i = 1; i < array.n; i++) {
    if (ahihi < array.list[i]) {
      ahihi = array.list[i];
    } else {
      flag = false;
    }
  }

  return flag;
}

void diemSoLanXuatHienX(DAYSO array, int x) {
  int count = 0;

  for (int i = 0; i < array.n; i++) {
    if (array.list[i] == x) {
      count++;
    }
  }

  cout << "\nSố lần xuất hiện của " << x << " trong mảng là " << count << endl;
}

void thayTheXthanhY(DAYSO &array, int x, int y) {
  for (int i = 0; i < array.n; i++) {
    if (array.list[i] == x) {
      array.list[i] = y;
    }
  }
}

int diemPhanTuKhongTrungNhau(DAYSO array) {
  int count = 1;
  bool flag = false;
  const int AHIHI = array.n;
  int array2[AHIHI];
  array2[0] = array.list[0];

  for (int i = 1; i <= array.n; i++) {
    for (int j = 0; j <= array.n; j++) {
      if (array2[j] == array.list[i]) {
        flag = true;
      }
    }
    if (flag == false) {
      count++;
    }
  }

  return count;
}

int xuatChanCuoiCung(DAYSO array) {
  int giaTriChan = -1;

  for (int i = 0; i < array.n; i++) {
    if (array.list[i] % 2 == 0) {
      giaTriChan = array.list[i];
    }
  }

  return giaTriChan;
}

int xuatSoNguyenToCuoiCung(DAYSO array) {
  int soNguyenTo = -1;

  for (int i = 0; i < array.n; i++) {
    if (kiemTraSoNguyenTo(array.list[i]) == true) {
      soNguyenTo = array.list[i];
    }
  }

  return soNguyenTo;
}

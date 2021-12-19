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
  int count = 0;
  for (int i = 0; i < matrix.row; i++) {
    for (int j = 0; j < matrix.col; j++) {
      for (int a = i; a < matrix.row; a++) {
        for (int b = j; b < matrix.col; b++) {
          if (matrix.data[i][j] == matrix.data[a][b]) {
            count++;
          }
        }
      }
      if (count >= 2) {
        return true;
      } else {
        count = 0;
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
      for (int a = i; a < matrix.row; a++) {
        for (int b = j; b < matrix.col; b++) {
          if (matrix.data[i][j] == matrix.data[a][b]) {
            countTmp++;
          }
        }
      }

      if (countTmp > count) {
        repeat = matrix.data[i][j];
        count = countTmp;
      }
      countTmp = 0;
    }
  }
  return repeat;
}

string chuanHoaChuoi(string &string) {
  for (int i = 0; i <= string.length(); i++) {
    for (int j = 0; j <= i; j++) {
      if (string[0] == ' ') {
        string.erase(string.begin());
      }
      if (string[i] == ' ' && string[i + 1] == ' ') {
        string.erase(string.begin() + i);
      }
      if (string[i] == '\0' && string[i - 1] == ' ') {
        string.erase(string.end() - 1);
      }
    }
  }
  return string;
}

void nhapVe(Ve &ve) {
  cout << "\n Số lượng vé bạn muốn nhập: ";
  cin >> ve.soLuongVe;

  for (int i = 0; i < ve.soLuongVe; i++) {
    cout << "\n Vé thứ " << i << endl;
    cin.ignore();
    cout << "tên phim: ";
    cin.getline(ve.phim.tenPhim, 20);
    cout << "giá Vé: ";
    cin >> ve.phim.giaVe;
    cout << "Thời gian: \n";
    cout << "Giờ: ";
    cin >> ve.phim.thoiGian.gio;
    cout << "Phút: ";
    cin >> ve.phim.thoiGian.phut;
    cout << "Ngày: ";
    cin >> ve.phim.ngay;
    cout << "Tháng: ";
    cin >> ve.phim.ngay.thang;
    cout << "năm: ";
    cin >> ve.phim.ngay.nam;
  }
}

void xuatVe(Ve ve) {
  for (int i = 0; i < ve.soLuongVe; i++) {
    cout << "\n Vé thứ " << i << endl;
    cout << "tên phim: ";
    cout << ve.phim.tenPhim << endl;
    cout << "giá Vé: ";
    cout << ve.phim.giaVe << endl;
    cout << "Thời gian: ";
    cout << ve.phim.thoiGian.gio << " giờ " << ve.phim.thoiGian.phut << " phút "
         << endl;
    cout << "Ngày: " << ve.phim.ngay << " tháng " << ve.phim.ngay.thang
         << " năm " << ve.phim.ngay.nam << endl;
  }
}

int xuatTongGiaTienVe(Ve ve) {
  int sum = 0;
  for (int i = 0; i < ve.soLuongVe; i++) {
    sum += ve.phim.giaVe;
  }
  return sum;
}

#include "header.h"

int nhapSoNguyenDuong(int &n) {
  do {
    cin >> n;
  } while (n <= 0);

  return n;
}

void nhapDaySo(DaySo &ve) {
  cout << "\nSố lượng phần tử của dẫy số: ";
  nhapSoNguyenDuong(ve.n);
  for (int i = 0; i < ve.n; i++) {
    cout << "\n[" << i << "]: ";
    cin >> ve.list[i];
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

int xuatSoNguyenToLonNhat(DaySo ve) {
  int max = -1;

  for (int i = 0; i < ve.n; i++) {
    if (kiemTraSoNguyenTo(ve.list[i]) == true && ve.list[i] > max) {
      max = ve.list[i];
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
      for (int ve = i; ve < matrix.row; ve++) {
        for (int ve = j; ve < matrix.col; ve++) {
          if (matrix.data[i][j] == matrix.data[ve][ve]) {
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
      for (int ve = i; ve < matrix.row; ve++) {
        for (int ve = j; ve < matrix.col; ve++) {
          if (matrix.data[i][j] == matrix.data[ve][ve]) {
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
    cout << "tên phim[i]: ";
    cin.getline(ve.phim[i].tenPhim, 20);
    cout << "giá Vé: ";
    cin >> ve.phim[i].gia;
    cout << "Thời gian: \n";
    cout << "Giờ: ";
    cin >> ve.phim[i].thoiGian.gio;
    cout << "Phút: ";
    cin >> ve.phim[i].thoiGian.phut;
    cout << "Ngày: ";
    cin >> ve.phim[i].ngay.ngay;
    cout << "Tháng: ";
    cin >> ve.phim[i].ngay.thang;
    cout << "năm: ";
    cin >> ve.phim[i].ngay.nam;
  }
}

void xuatVe(Ve ve) {
  for (int i = 0; i < ve.soLuongVe; i++) {
    cout << "\n Vé thứ " << i << endl;
    cout << "tên phim[i]: ";
    cout << ve.phim[i].tenPhim << endl;
    cout << "giá Vé: ";
    cout << ve.phim[i].gia << endl;
    cout << "Thời gian: ";
    cout << ve.phim[i].thoiGian.gio << " giờ " << ve.phim[i].thoiGian.phut
         << " phút " << endl;
    cout << "Ngày: " << ve.phim[i].ngay.ngay << " tháng "
         << ve.phim[i].ngay.thang << " năm " << ve.phim[i].ngay.nam << endl;
  }
}

int xuatTongGiaTienVe(Ve ve) {
  int sum = 0;
  for (int i = 0; i < ve.soLuongVe; i++) {
    sum += ve.phim[i].gia;
  }
  return sum;
}

void xuatCacPhimGiaVeCaoNhat(Ve ve) {
  int max = ve.phim[0].gia;
  for (int i = 1; i < ve.soLuongVe; i++) {
    if (ve.phim[i].gia > max) {
      max = ve.phim[i].gia;
    }
  }
  for (int i = 0; i < ve.soLuongVe; i++) {
    if (ve.phim[i].gia == max) {
      cout << "\n Vé thứ " << i << endl;
      cout << "tên phim[i]: ";
      cout << ve.phim[i].tenPhim << endl;
      cout << "giá Vé: ";
      cout << ve.phim[i].gia << endl;
      cout << "Thời gian: ";
      cout << ve.phim[i].thoiGian.gio << " giờ " << ve.phim[i].thoiGian.phut
           << " phút " << endl;
      cout << "Ngày: " << ve.phim[i].ngay.ngay << " tháng "
           << ve.phim[i].ngay.thang << " năm " << ve.phim[i].ngay.nam << endl;
    }
  }
}

void swap(int *x, int *y) {
  int tmp = *x;
  *x = *y;
  *y = tmp;
}

void sapXep(Ve &ve) {
  for (int i = 0; i < ve.soLuongVe; i++)
    for (int j = 0; j < ve.soLuongVe - i - 1; j++) {
      if (ve.phim[j].ngay.nam != ve.phim[j + 1].ngay.nam) {
        if (ve.phim[j].ngay.nam > ve.phim[j + 1].ngay.nam) {
          swap(ve.phim[j], ve.phim[j + 1]);
        }
      }

      if (ve.phim[j].ngay.thang != ve.phim[j + 1].ngay.thang) {
        if (ve.phim[j].ngay.thang > ve.phim[j + 1].ngay.thang) {
          swap(ve.phim[j], ve.phim[j + 1]);
        }
      }

      if (ve.phim[j].ngay.ngay != ve.phim[j + 1].ngay.ngay) {
        if (ve.phim[j].ngay.ngay > ve.phim[j + 1].ngay.ngay) {
          swap(ve.phim[j], ve.phim[j + 1]);
        }
      }
    }
}

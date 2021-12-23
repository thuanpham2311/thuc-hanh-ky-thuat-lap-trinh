#include "header.h"

void nhapMang(Array &a) {
  cout << "\n Nhập số lượng phần tử của mảng: ";
  cin >> a.n;
  for (int i = 0; i < a.n; i++) {
    cout << "\narray[" << i << "]: ";
    cin >> a.data[i];
  }
}

bool kiemTraSoNguyenTo(int y) {
  if (y < 2) {
    return false;
  } else {
    for (int i = 2; i < y / 2; i++) {
      if (y % i == 0) {
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

void chuanHoaChuoi(string &x) {
  for (int i = 0; i < x.length(); i++) {
    for (int j = 0; j < i; j++) {
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
}

void nhapVe(Ve &ve) {
  cout << "\n Nhập số lượng vé: ";
  cin >> ve.soLuongVe;
  for (int i = 0; i < ve.soLuongVe; i++) {
    cin.ignore();
    cout << "\n Vé thứ " << i << endl;
    cout << "Tên phim: ";
    cin.getline(ve.phim[i].tenPhim, 20);
    cout << "Giá vé: ";
    cin >> ve.phim[i].giaVe;
    cout << "Xuất chiếu: \n";
    cout << "Giờ: ";
    cin >> ve.phim[i].xuatChieu.gio;
    cout << "Phút: ";
    cin >> ve.phim[i].xuatChieu.phut;
    cout << "Ngày xem: \n";
    cout << "ngày: ";
    cin >> ve.phim[i].ngayXem.ngay;
    cout << "tháng: ";
    cin >> ve.phim[i].ngayXem.thang;
    cout << "năm: ";
    cin >> ve.phim[i].ngayXem.nam;
  }
}

void xuatVe(Ve ve) {
  for (int i = 0; i < ve.soLuongVe; i++) {
    cout << "\nVé thứ " << i << endl;
    cout << "Tên phim: " << ve.phim[i].tenPhim << endl;
    cout << "Giá vé: " << ve.phim[i].giaVe << endl;
    cout << "Xuất chiếu: " << ve.phim[i].xuatChieu.gio << " giờ "
         << ve.phim[i].xuatChieu.gio << " phút" << endl;
    cout << "Ngày xem: ngày " << ve.phim[i].ngayXem.ngay << " tháng "
         << ve.phim[i].ngayXem.thang << " năm " << ve.phim[i].ngayXem.nam
         << endl;
  }
}

int xuatTongGiaVe(Ve ve) {
  int sum = 0;
  for (int i = 0; i < ve.soLuongVe; i++) {
    sum += ve.phim[i].giaVe;
  }
  return sum;
}

void xuatCacPhimCoGiaVeCaoNhat(Ve ve) {
  int max = 0;
  for (int i = 0; i < ve.soLuongVe; i++) {
    if (ve.phim[i].giaVe > max) {
      max = ve.phim[i].giaVe;
    }
  }
  for (int i = 0; i < ve.soLuongVe; i++) {
    if (ve.phim[i].giaVe == max) {
      cout << "\nVé thứ " << i << endl;
      cout << "Tên phim: " << ve.phim[i].tenPhim << endl;
      cout << "Giá vé: " << ve.phim[i].giaVe << endl;
    }
  }
}

void sapXep(Ve &ve) {
  for (int i = 0; i < ve.soLuongVe; i++) {
    for (int j = i; j < ve.soLuongVe - i - 1; j++) {
      if (ve.phim[i].ngayXem.nam > ve.phim[i + 1].ngayXem.nam) {
        swap(ve.phim[i], ve.phim[i + 1]);
      }
      if (ve.phim[i].ngayXem.thang > ve.phim[i + 1].ngayXem.thang) {
        swap(ve.phim[i], ve.phim[i + 1]);
      }
      if (ve.phim[i].ngayXem.ngay > ve.phim[i + 1].ngayXem.ngay) {
        swap(ve.phim[i], ve.phim[i + 1]);
      }
    }
  }
}

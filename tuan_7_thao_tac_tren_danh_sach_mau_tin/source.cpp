#include "header.h"

void nhapNhanVien(NhanVien &nhanVien) {
  cin.ignore();
  cout << "\nNhập họ tên nhân viên: ";
  cin.getline(nhanVien.hoTen, MAX_CHAR);

  cout << "\nNhập mã số nhân viên: ";
  cin.getline(nhanVien.maSo, MAX_CHAR);

  cout << "\nNhập lương cơ bản của nhân viên: ";
  cin >> nhanVien.luongCoBan;

  cout << "\nNhập hệ số lương của nhân viên: ";
  cin >> nhanVien.heSoLuong;
}

void xuatNhanVien(NhanVien nhanVien) {
  cout << "\nHọ tên nhân viên: " << nhanVien.hoTen;

  cout << "\nMã số nhân viên: " << nhanVien.maSo;

  cout << "\nLương cơ bản của nhân viên: " << nhanVien.luongCoBan;

  cout << "\nHệ số lương của nhân viên: " << nhanVien.heSoLuong;
}

void nhapCongty(CongTy &congTy) {
  cout << "\nNhập số lượng nhân viên (≤" << MAX << "): ";
  cin >> congTy.soLuongNhanVien;
  for (int i = 0; i < congTy.soLuongNhanVien; i++) {
    cout << "\nNhập nhân viên thứ " << i << ":" << endl;
    nhapNhanVien(congTy.danhSachNhanVien[i]);
  }
}

void xuatCongTy(CongTy congTy) {
  cout << "\nSố lượng nhân viên: " << congTy.soLuongNhanVien << endl;
  cout << "\nDanh sách nhân viên:\n";
  for (int i = 0; i < congTy.soLuongNhanVien; i++) {
    cout << "\nNhân viên thứ " << i << ":\n";
    xuatNhanVien(congTy.danhSachNhanVien[i]);
  }
}

float tinhLuongNhanVien(NhanVien nhanVien) {
  return nhanVien.luongCoBan * nhanVien.heSoLuong;
}

float tongLuongCongTy(CongTy congTy) {
  float sum = 0;
  for (int i = 0; i < congTy.soLuongNhanVien; i++) {
    sum += tinhLuongNhanVien(congTy.danhSachNhanVien[i]);
  }
  return sum;
}

bool kiemTraMaSoNhanVien(CongTy congTy, char maCanTim[MAX_CHAR]) {
  for (int i = 0; i < congTy.soLuongNhanVien; i++) {
    if (strcmp(congTy.danhSachNhanVien[i].maSo, maCanTim) == 0) {
      return true;
    }
  }
  return false;
}

float xuatLuongCaoNhatCongTy(CongTy congTy) {
  float max = 0;
  for (int i = 0; i < congTy.soLuongNhanVien; i++) {
    if (tinhLuongNhanVien(congTy.danhSachNhanVien[i]) > max) {
      max = tinhLuongNhanVien(congTy.danhSachNhanVien[i]);
    }
  }
  return max;
}

void xuatNhanVienCoLuongCaoNhat(CongTy congTy) {
  for (int i = 0; i < congTy.soLuongNhanVien; i++) {
    if (tinhLuongNhanVien(congTy.danhSachNhanVien[i]) ==
        xuatLuongCaoNhatCongTy(congTy)) {
      xuatNhanVien(congTy.danhSachNhanVien[i]);
    }
  }
}

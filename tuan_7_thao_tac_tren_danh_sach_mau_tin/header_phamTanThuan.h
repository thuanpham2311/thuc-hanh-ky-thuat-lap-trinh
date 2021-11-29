#include <cmath>
#include <cstring>
#include <iostream>
using namespace std;

const int MAX = 20;
const int MAX_CHAR = 30;

struct NhanVien {
  char hoTen[MAX_CHAR];
  char maSo[MAX_CHAR];
  float luongCoBan;
  float heSoLuong;
};

struct CongTy {
  int soLuongNhanVien;
  NhanVien danhSachNhanVien[MAX];
};

void nhapNhanVien(NhanVien &nhanVien);
void xuatNhanVien(NhanVien nhanVien);
void nhapCongty(CongTy &congTy);
void xuatCongTy(CongTy congTy);
float tinhLuongNhanVien(NhanVien nhanVien);
float tongLuongCongTy(CongTy congTy);
bool kiemTraMaSoNhanVien(CongTy congTy, char maCanTim[MAX_CHAR]);
float xuatLuongCaoNhatCongTy(CongTy congTy);
void xuatNhanVienCoLuongCaoNhat(CongTy congTy);

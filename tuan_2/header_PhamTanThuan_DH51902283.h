#include <cmath>
#include <iostream>
using namespace std;

const int MAX = 100;

struct DAYSO {
  int list[MAX];
  int n;
};

int nhapSoNguyenDuong(int &n);
void nhapDaySo(DAYSO &array);
void xuatDS(DAYSO array);
int diemPhanTuChiaHet3Va5(DAYSO array);
int diemPhanTuAm(DAYSO array);
int diemPhanTuDuong(DAYSO array);
int diemPhanTuBang0(DAYSO array);
int diemPhanTuHoangThien(DAYSO array);
void diemSoLanXuatHienX(DAYSO array, int x);
bool kiemTraSoNguyenTo(int number);
bool kiemTraSoHoangThien(int number);
bool kiemTraTangDan(DAYSO array);
int tongPhanTuSoNguyenTo(DAYSO array);
void thayTheXthanhY(DAYSO &array, int x, int y);
int diemPhanTuKhongTrungNhau(DAYSO array);
int xuatChanCuoiCung(DAYSO array);
int xuatSoNguyenToCuoiCung(DAYSO array);

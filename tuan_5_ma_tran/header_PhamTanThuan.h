#include <cmath>
#include <iostream>
using namespace std;

const int MAX = 10;

struct MaTranVuong {
  int list[MAX][MAX];
  int n;
};

int nhapSoNguyenDuong(int &n);
void nhapMaTranVuong(MaTranVuong &a);
void xuatMaTranVuong(MaTranVuong a);
int xuatTongDuongCheoChinh(MaTranVuong a);
int xuatTongDuongCheoPhu(MaTranVuong a);
void xuatTamGiaTrenTrai(MaTranVuong a);
bool kiemTraMaTranDoiXung(MaTranVuong a);
void xuatTamGiacTrenPhai(MaTranVuong a);
void xuatTamGiacDuoiPhai(MaTranVuong a);
bool kiemTraPhanTuAmTamGiacDuoiPhai(MaTranVuong a);
void xuatMaTranChuyenVi(MaTranVuong a);
int xuatPhanTuLonNhatTamGiaTrenTrai(MaTranVuong a);
void swap(int *x, int *y);
void bubbleSort(int arr[], int n);
void xuatDuongCheoPhuGiamDan(MaTranVuong a);

#include <cmath>
#include <iostream>
#include <string>
using namespace std;

const int MAX = 20;

struct Array {
  int data[MAX];
  int n;
};

void nhapMang(Array &a);
bool kiemTraSoNguyenTo(int x);
int xuatSoNguyenToLonNhat(Array a);

struct Matrix {
  int data[MAX][MAX];
  int row;
  int col;
};

void nhapMaTran(Matrix &a);
int xuatGiaTriXuatHienNhieuNhatTrongMaTran(Matrix a);
bool kiemTraCoGiaTriLapLaiTrongMaTran(Matrix x);
void chuanHoaChuoi(string x);

#include <cmath>
#include <iostream>
using namespace std;

const int MAX = 20;

struct MaTran {
  int maTran[MAX][MAX];
  int dong;
  int cot;
};

void nhapMaTran(MaTran &m);
void xuatMaTran(MaTran m);
int xuatTongPhanTuChanMaTran(MaTran m);
int xuatPhanTuNhoNhatMaTran(MaTran m);
int xuatTongDongMaTran(MaTran m, int dong);
void xuatTongPhanTuTungDongMaTran(MaTran m);
int xuatViTriTongDongLonNhatMaTran(MaTran m);
int xuatPhanTuLonNhatDongMaTran(MaTran m, int dong);
int xuatTongPhanTuLonNhatMoiDong(MaTran m);
int xuatTongCotMaTran(MaTran m, int cot);
void xuatTongPhanTuTungCotMaTran(MaTran m);
void nhap2MaTranCungKichThuoc(MaTran &m, MaTran &n);
void xuatTong2MaTran(MaTran a, MaTran b);
bool kiemTranMaTranDonVi(MaTran a);

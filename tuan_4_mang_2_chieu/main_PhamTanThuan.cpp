#include "header_PhamTanThuan.h"

int main() {
  MaTran a, b;

  nhapMaTran(a);
  xuatMaTran(a);

  cout << "\nTổng phần tử chẳn trong ma trận là " << xuatTongPhanTuChanMaTran(a)
       << endl;

  cout << "\nPhần tử nhỏ nhất trong ma trận là " << xuatPhanTuNhoNhatMaTran(a)
       << endl;

  xuatTongPhanTuTungDongMaTran(a);

  cout << "\nDòng có tổng lớn nhất trong ma trận là: "
       << xuatViTriTongDongLonNhatMaTran(a) << endl;

  cout << "\nTổng các phần tử lớn nhất trên mỗi dòng là "
       << xuatTongPhanTuLonNhatMoiDong(a) << endl;

  xuatTongPhanTuTungCotMaTran(a);

  cout << "\nTổng 2 ma trận" << endl;
  nhap2MaTranCungKichThuoc(a, b);

  cout << "\nTổng 2 ma trận là: " << endl;
  xuatTong2MaTran(a, b);

  cout << "\nKiểm tra ma trận đơn vị \n";
  cout << "\nMa trận đơn vị Iₙ có số chiều n là một ma trận nxn trong đó mọi "
          "phần tử trên đường chéo chính bằng 1 và tất cả những phần tử khác "
          "đều bằng 0\n";
  MaTran c;
  nhapMaTran(c);
  xuatMaTran(c);

  if (kiemTranMaTranDonVi(c) == true) {
    cout << "Ma trận là ma trận đơn vị" << endl;
  } else {
    cout << "Ma trận không phải ma trận đơn vị" << endl;
  }

  return 0;
}

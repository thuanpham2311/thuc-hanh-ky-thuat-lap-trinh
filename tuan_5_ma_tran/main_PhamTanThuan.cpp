#include "header_PhamTanThuan.h"

int main() {
  MaTranVuong a;

  nhapMaTranVuong(a);
  xuatMaTranVuong(a);

  cout << "\n Tổng các phần tử trên đường chéo chính: "
       << xuatTongDuongCheoChinh(a) << endl;

  cout << "\n Tổng các phần tử trên đường chéo phụ: " << xuatTongDuongCheoPhu(a)
       << endl;

  cout << "\n Ma trận tâm giác trên trái" << endl;
  xuatTamGiaTrenTrai(a);

  if (kiemTraMaTranDoiXung(a) == true) {
    cout << "\n Ma trận đối xứng\n;";
  } else {
    cout << "\n Ma trận không đối xứng\n";
  }

  cout << "\n Ma trận dưới tam giác trên phải\n";
  xuatTamGiacTrenPhai(a);

  cout << "\n Ma trận dưới tam giác dưới phải\n";
  xuatTamGiacDuoiPhai(a);

  if (kiemTraPhanTuAmTamGiacDuoiPhai(a) == true) {
    cout << "\n ma trận tam giác dưới phải có phần tử âm\n";
  } else {
    cout << "\n ma trận tam giác dưới phải không có phần tử âm\n";
  }

  cout << "\n Ma trận chuyển vị\n";
  xuatMaTranChuyenVi(a);

  cout << "\n----\n";
  xuatMaTranVuong(a);

  cout << "\n Phần tử lớn nhất tam giác trên trái ma trận vuông là: "
       << xuatPhanTuLonNhatTamGiaTrenTrai(a) << endl;

  cout << "\n Xuất đường chéo chính giảm dần: ";
  xuatDuongCheoPhuGiamDan(a);
  return 0;
}

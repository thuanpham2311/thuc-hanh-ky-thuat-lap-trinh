#include "header_PhamTanThuan_DH51902283.h"

int main() {
  DAYSO array;
  int x, y;

  nhapDaySo(array);
  xuatDS(array);

  // cout << "Điếm phần tử chia hết cho 3 và 5: " <<
  // diemPhanTuChiaHet3Va5(array);

  // cout << "\nSố lượng phần tử âm = " << diemPhanTuAm(array) << endl;
  // cout << "\nSố lượng phần tử dương = " << diemPhanTuDuong(array) << endl;
  // cout << "\nSố lượng phần tử bằng 0 = " << diemPhanTuBang0(array) << endl;

  // cout << "\nTổng số lượng phần tử là số nguyên tố = " <<
  // tongPhanTuSoNguyenTo(array) << endl;

  // cout << "\nSố lượng phần tử là số hoàng thiện = " <<
  // diemPhanTuHoangThien(array) << endl;

  // if (kiemTraTangDan(array) == true) {
  // cout << "\n Dãy tăng dần";
  // } else {
  // cout << "\n Dãy không tăng dần";
  // }

  // cout << "Nhập giá trị cần điếm trong mảng = ";
  // cin >> x;
  // diemSoLanXuatHienX(array, x);

  // cout << "\nThay X thành Y\n";
  // cout << "\nNhập giá trị X = ";
  // cin >> x;
  // cout << "\nNhập giá trị Y = ";
  // cin >> y;

  // thayTheXthanhY(array, x, y);
  // xuatDS(array);

  cout << "\nSố lượng phần tử không trùng nhau trong mảng = " << diemPhanTuKhongTrungNhau(array) << endl;

  // if (xuatChanCuoiCung(array) != -1) {
    // cout << "\n Phần tử chẳn cuối cùng trong mảng là " << xuatChanCuoiCung(array) << endl;
  // } else {
    // cout << "\n Không có phần tử chẳn cuối cùng trong mảng" << endl;
  // }

  // if (xuatSoNguyenToCuoiCung(array) != -1) {
    // cout << "\n Số nguyên tố cuối cùng trong mảng là " << xuatSoNguyenToCuoiCung(array) << endl;
  // } else {
    // cout << "\n Không có số nguyên tố cuối cùng trong mảng" << endl;
  // }

  return 0;
}

#include "header.h"

int main() {
  int menuNumber;

  do {
    cout << "\n\n Nhập  bạn muốn thực thi (nhập 0 để thoát)" << endl;
    cout << "1: tìm số nguyên tố lớn nhất trong mảng một chiều các số nguyên\n"
         << endl;
    cout << "2: Tìm giá trị xuất hiện nhiều nhất trong ma trận.\n" << endl;
    cout << "3: chuẩn hóa chuỗi.\n" << endl;
    cout << "4: Vé xem phim\n" << endl;
    cout << "=> ? = ";
    cin >> menuNumber;
    switch (menuNumber) {
      case 0:
        break;
      case 1:
        DaySo a;
        nhapDaySo(a);

        if (xuatSoNguyenToLonNhat(a) == -1) {
          cout << "\n mảng không có số nguyên tố" << endl;
        } else {
          cout << "\n Số nguyên tố lớn nhất trong mảng là: "
               << xuatSoNguyenToLonNhat(a) << endl;
        }

        break;
      case 2:
        Matrix matrix;
        nhapMaTran(matrix);
        if (kiemTraCoSoLapLaiTrongMaTran(matrix) == false) {
          cout << "\n Không có giá trị lập lại\n";
        } else {
          cout << "\n giá trị xuất hiện nhiều nhất trong mảng là: "
               << timGiaTriXuatHienNhieuNhat(matrix) << endl;
        }
        break;
      case 3: {
        cin.ignore();
        string string;
        getline(cin, string);
        chuanHoaChuoi(string);
        cout << string;
      } break;
      case 4:
        Ve ve;
        nhapVe(ve);
        xuatVe(ve);
        cout << "\n Tổng giá vé: " << xuatTongGiaTienVe(ve) << endl;
        break;
    }
  } while (menuNumber != 0);

  return 0;
}

#include "header.h"

int main() {
  CongTy congTyX;
  int menuNumber;

  do {
    cout << "\n\nNhập chức năng bạn muốn thực thi (nhập 0 để thoát)" << endl;
    cout << "1: nhập danh sách nhân viên\n" << endl;
    cout << "2: xuất danh sách nhân viên\n" << endl;
    cout << "3: Tổng lương của công ty\n" << endl;
    cout << "4: Tìm nhân viên theo mã số\n" << endl;
    cout << "5: Tìm lương cao nhất công ty\n" << endl;
    cout << "6: Tìm nhân viên có lương cao nhất công ty\n" << endl;
    cout << "=> ? = ";
    cin >> menuNumber;
    switch (menuNumber) {
      case 0:
        break;
      case 1:
        nhapCongty(congTyX);
        break;
      case 2:
        xuatCongTy(congTyX);
        break;
      case 3:
        cout << "\nTổng lương của công ty: " << tongLuongCongTy(congTyX);
        break;
      case 4:
        char maSoNhanvien[MAX_CHAR];
        cin.ignore();
        cout << "\nNhập mã số nhân viên cần tìm";
        cin.getline(maSoNhanvien, MAX_CHAR);
        if (kiemTraMaSoNhanVien(congTyX, maSoNhanvien) == true) {
          cout << "\n\nTìm thấy nhân viên\n";
        } else {
          cout << "\n\nKhông tìm thấy nhân viên\n";
        }
        break;
      case 5:
        cout << "\n\nLương cao nhất công ty là: "
             << xuatLuongCaoNhatCongTy(congTyX);
        break;
      case 6:
        cout << "\n\nCác nhân viên lương cao nhất công ty "
                "là: ";
        xuatNhanVienCoLuongCaoNhat(congTyX);
        break;
    }
  } while (menuNumber != 0);

  return 0;
}

#include "header.h"

int main() {
  int menuNumber;

  do {
    cout << "\n\n Nhập bạn số bạn muốn thực thi (nhập 0 để thoát)" << endl;
    cout << "1: số nguyên tố lớn nhất trong mảng một chiều các số nguyên \n"
         << endl;

    cout << "=> ? = ";
    cin >> menuNumber;

    switch (menuNumber) {
      case 0:
        break;
      case 1:
        Array a;
        nhapMang(a);
        if (xuatSoNguyenToLonNhat(a) == -1) {
          cout << "\n không có số nguyên tố trong mảng" << endl;
        } else {
          cout << "\nsố nguyên tố lớn nhất là " << xuatSoNguyenToLonNhat(a)
               << endl;
        }
        break;
    }
  } while (menuNumber != 0);
  return 0;
}

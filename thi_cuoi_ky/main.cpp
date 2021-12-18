#include "header.h"

int main() {
  int menuNumber;

  do {
    cout << "\n\n Nhập  bạn muốn thực thi (nhập 0 để thoát)" << endl;
    cout << "1: tìm số nguyên tố lớn nhất trong mảng một chiều các số nguyên\n"
         << endl;
    cout << "2: Tìm giá trị xuất hiện nhiều nhất trong ma trận.\n" << endl;
    cout << "=> ? = ";
    cin >> menuNumber;
    switch (menuNumber) {
      case 0:
        break;
      case 1:
        int arrayLenght;
        nhapDoDaiCuaMang(arrayLenght);

        int array[arrayLenght];

        nhapMang(array, arrayLenght);

        if (xuatSoNguyenToLonNhat(array, arrayLenght) == -1) {
          cout << "\n mảng không có số nguyên tố" << endl;
        } else {
          cout << "\n Số nguyên tố lớn nhất trong mảng là: "
               << xuatSoNguyenToLonNhat(array, arrayLenght) << endl;
        }

        break;
      case 2:
        Matrix matrix;

        break;
    }
  } while (menuNumber != 0);

  return 0;
}

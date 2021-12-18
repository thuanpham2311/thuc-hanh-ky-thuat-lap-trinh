#include "header.h"

int main() {
  int menuNumber;

  do {
    cout << "\n\n Nhập chức năng bạn muốn thực thi (nhập 0 để thoát)" << endl;
    cout << "1: tính giai thừa\n" << endl;
    cout << "=> ? = ";
    cin >> menuNumber;
    switch (menuNumber) {
      case 0:
        break;
      case 1:
        break;
    }
  } while (menuNumber != 0);

  return 0;
}

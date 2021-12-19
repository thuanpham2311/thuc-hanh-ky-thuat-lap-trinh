#include "header.h"

int main() {
  int menuNumber;

  do {
    cout << "\n\n Nhập bạn số bạn muốn thực thi (nhập 0 để thoát)" << endl;
    cout << "1: \n" << endl;

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

#include "header.h"

int main() {
  int menuNumber;

  do {
    cout << "\n\n Nhập chức năng bạn muốn thực thi (nhập 0 để thoát)" << endl;
    cout << "1: tính giai thừa\n" << endl;
    cout << "2: xuất phần tử n của dãy Fibonaci\n" << endl;
    cout << "3: Tinh s=1+2+3+...+n\n" << endl;
    cout << "4: Tinh s= 1^2+2^2+3^2+...\n" << endl;
    cout << "5: tinh s=1/2+1/4+... 1/2*n \n" << endl;
    cout << "=> ? = ";
    cin >> menuNumber;
    switch (menuNumber) {
      case 0:
        break;
      case 1:
        int number;
        cout << "\n Nhập số bạn muốn giai thừa, x = ";
        cin >> number;
        cout << "\n " << number << "! = " << xuatGiaiThua(number) << endl;
        break;
      case 2:
        int NumberCase2;
        cout << "\n Nhập phần tử n của dãnh Fibonaci, n = ";
        cin >> NumberCase2;
        cout << "\n " << NumberCase2 << " = "
             << xuatPhanTuNfibonaci(NumberCase2) << endl;
        break;
      case 3:
        int NumberCase3;
        cout << "\n Nhập n = ";
        cin >> NumberCase3;
        cout << "\n S = " << xuatTongTangDan(NumberCase3) << endl;
        break;
      case 4:
        int NumberCase4;
        // test 4: 1 ^ 2 + 2 ^ 2 + 3 ^ 2 + 4 ^ 2  + 5^2= 30
        cout << "\n Nhập n = ";
        cin >> NumberCase4;
        cout << "\n S = " << xuatTongMu2TangDan(NumberCase4) << endl;
        break;
        // case 5:
        // int NumberCase5;
        // // test 4: 1/2 + 1/4 + 1/6 + 1/8 = 1.041666667
        // cout << "\n Nhập n = ";
        // cin >> NumberCase5;
        // cout << "\n S = " << xuatMau2muN(NumberCase5) << endl;
        // break;
    }
  } while (menuNumber != 0);

  return 0;
}

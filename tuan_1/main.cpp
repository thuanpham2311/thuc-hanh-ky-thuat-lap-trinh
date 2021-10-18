#include "header.h"

int main() {
  int x, y, z, a, b;

  cout << "\nkiểm tra n có phải là lũy thừa cơ số 2 hay không?" << endl;

  nhapSoNguyenDuong(x);

  if (kiemTraLuyThuaCoSo2(x) == true) {
    cout << "\n⇒ n = " << x << " là lũy thừa cơ số 2 \n";
  } else {
    cout << "\n⇒ n = " << x << " không là lũy thừa cơ số 2 \n";
  }

  cout << "\n#######################\n";

  cout << "\nkiểm tra có phải là so nguyen to" << endl;

  nhapSoNguyenDuong(y);

  if (kiemTraSoNguyenTo(y) == true) {
    cout << "\n⇒ x = " << y << " là so nguyen to \n";
  } else {
    cout << "\n⇒ x = " << y << " không là so nguyen to \n";
  }

  cout << "\n#######################\n";

  cout << "\n xuat n so nguyen to dau tien";
  nhapSoNguyenDuong(z);
  xuatNSoNguyenToDauTien(z);

  cout << "\n#######################\n";

  cout << "\n xuat cac so nguyen to ≤ n";
  nhapSoNguyenDuong(a);
  xuatSoNguyenToBeHonBangN(a);

  cout << "\n#######################\n";

  cout << "kiem tra so nguyen duong n co phai la so hoang thien hay khong" << endl;
  nhapSoNguyenDuong(b);

  if (kiemTraSoHoangThien(b) == true) {
    cout << "\n⇒ " << b << " là so hoang thien \n";
  } else {
    cout << "\n⇒ " << b << " không là so hoang thien \n";
  }

  return 0;
}

#include "header.h"

int main() {
  char a[MAX];
  cout << "\nnhap chuoi: ";
  cin.getline(a, MAX + 1);
  cout << a;
  char *b;
  b = daoChuoi(a);
  cout << "\n" << b;

  // char *c;
  // char *d;
  // c = chenChuoiStupid(a, b, 2);

  // int location;
  // cout << "\nnhap vi tri can chen: ";
  // cin >> location;
  // cout << "\nnhap chuoi: ";
  // cin.getline(d, MAX + 1);
  // c = chenChuoi(a, d, location);
  // cout << "\n" << c;

  // char *ahihiUpercase;
  // ahihiUpercase = a;
  // ahihiUpercase = chuyenChuHoa(ahihiUpercase);
  // cout << "\n" << ahihiUpercase;

  int num = 5;
  int pos = 3;
  xoaNKyTuChuoiOViTri(a,num, pos);
  cout << "\n" << a;
  return 0;
}

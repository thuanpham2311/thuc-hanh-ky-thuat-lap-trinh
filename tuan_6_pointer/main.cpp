#include "header.h"

int main() {
  char a[MAX];
  cout << "\nnhap chuoi: ";
  cin.getline(a, MAX + 1);
  cout << a;
  char *b;
  b = daoChuoi(a);
  cout << "\n" << b;
  char *c;
  c = chenChuoi(a, b, 6);
  cout << "\n" << c;
  return 0;
}

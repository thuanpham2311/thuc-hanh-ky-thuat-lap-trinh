#include "header.h"

void hoanVi(char &a, char &b) {
  int temp = a;
  a = b;
  b = temp;
}

char* daoChuoi(char *a) {
  char *b = new char[MAX + 1];
  strcpy(b, a);
  int len = strlen(b) - 1;
  for (int i = 0; i < len/2; i++) {
    hoanVi(b[i], b[len - i - 1]);
  }
  return b;
}

char* chenChuoiStupid(char *a, char *b, int location) {
  char *c = new char[MAX + 1];
  int lenA = strlen(a) - 1;
  int lenB = strlen(b) - 1;

  for (int i = 0; i < lenA - location - 1; i++) {
    c[i] = a[i];
  }

  for (int i = 0; i < lenB; i++) {
    c[i+location] = b[i];
  }

  for (int i = 0; i < lenA - location; i++) {
    c[i + location + lenB] = a[location + i];
  }

  return c;
}

char* chenChuoi(char *a, char *b, int location) {
  char *c = new char[MAX + 1];

  strcpy(c, a + location);

  a[location] = '\0';

  strcat(a, b);
  strcat(a, c);

  return a;
}

char* chuyenChuHoa(char *a) {
  char *b = new char[MAX + 1];

  strcpy(b, a);

  for (int i = 0; i < strlen(b); i++) {
    if (b[i] >= 97 && b[i] <= 122) {
      b[i] = b[i] - 32;
    }
  }

  return b;
}

char* xoaNKyTuChuoiOViTriStupid(char *a, int num, int pos) {
  char *b = new char[MAX + 1];

  strcpy(b, a);

  for (int i = 0; i < strlen(b) - num; i++) {
    b[i + pos] = b[pos + num + i];
    b--;
  }

  return b;
}

char* xoaNKyTuChuoiOViTri(char *a, int num, int pos) {
  char *b = new char[MAX + 1];

  strcpy(b, a + pos + num);

  b[pos] = '\0';
  return b;
}

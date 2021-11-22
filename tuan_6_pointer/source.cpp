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

char* chenChuoi(char *a, char *b, int location) {
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

#include <iostream>
using namespace std;

void nhapMang(int a[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "a[" << i << "] = ";
    cin >> a[i];
  }
}
int main() { return 0; }

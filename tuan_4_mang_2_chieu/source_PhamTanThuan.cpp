#include "header_PhamTanThuan.h"

void nhapMaTran(MaTran &m) {
  do {
    cout << "Nhập số dòng: ";
    cin >> m.dong;
  } while (m.dong <= 0 || m.dong > MAX);

  do {
    cout << "Nhập số cột: ";
    cin >> m.cot;
  } while (m.cot <= 0 || m.cot > MAX);
  for (int i = 0; i < m.dong; i++) {
    for (int j = 0; j < m.cot; j++) {
      cout << "[" << i << "][" << j << "]: ";
      cin >> m.maTran[i][j];
    }
  }
}

void xuatMaTran(MaTran m) {
  for (int i = 0; i < m.dong; i++) {
    for (int j = 0; j < m.cot; j++) {
      cout << m.maTran[i][j] << " ";
    }
    cout << endl;
  }
}

int xuatTongPhanTuChanMaTran(MaTran m) {
  int sum = 0;

  for (int i = 0; i < m.dong; i++) {
    for (int j = 0; j < m.cot; j++) {
      if (m.maTran[i][j] % 2 == 0) {
        sum += m.maTran[i][j];
      }
    }
  }

  return sum;
}

int xuatPhanTuNhoNhatMaTran(MaTran m) {
  int min = m.maTran[0][0];

  for (int i = 0; i < m.dong; i++) {
    for (int j = 0; j < m.cot; j++) {
      if (m.maTran[i][j] < min) {
        min = m.maTran[i][j];
      }
    }
  }

  return min;
}

int xuatTongDongMaTran(MaTran m, int dong) {
  int sum = 0;

  for (int j = 0; j < m.cot; j++) {
    sum += m.maTran[dong][j];
  }

  return sum;
}

void xuatTongPhanTuTungDongMaTran(MaTran m) {
  for (int i = 0; i < m.dong; i++) {
    cout << "\nDòng " << i << " tổng = " << xuatTongDongMaTran(m, i) << endl;
  }
}

int xuatViTriTongDongLonNhatMaTran(MaTran m) {
  int max = xuatTongDongMaTran(m, 0);
  int location = 0;

  for (int i = 0; i < m.dong; i++) {
    for (int j = 0; j < m.cot; j++) {
      if (xuatTongDongMaTran(m, i) > max) {
        max = xuatTongDongMaTran(m, i);
        location = i;
      }
    }
  }

  return location;
}

int xuatPhanTuLonNhatDongMaTran(MaTran m, int dong) {
  int max = m.maTran[0][0];

  for (int j = 0; j < m.cot; j++) {
    if (m.maTran[dong][j] > max) {
      max = m.maTran[dong][j];
    }
  }

  return max;
}

int xuatTongPhanTuLonNhatMoiDong(MaTran m) {
  int sum = 0;

  for (int i = 0; i < m.dong; i++) {
    sum += xuatPhanTuLonNhatDongMaTran(m, i);
  }

  return sum;
}

int xuatTongCotMaTran(MaTran m, int cot) {
  int sum = 0;

  for (int i = 0; i < m.dong; i++) {
    sum += m.maTran[i][cot];
  }

  return sum;
}

void xuatTongPhanTuTungCotMaTran(MaTran m) {
  for (int i = 0; i < m.cot; i++) {
    cout << "\nCột " << i << " tổng = " << xuatTongCotMaTran(m, i) << endl;
  }
}

void nhap2MaTranCungKichThuoc(MaTran &m, MaTran &n) {
  do {
    cout << "Nhập số dòng: ";
    cin >> m.dong;
  } while (m.dong <= 0 || m.dong > MAX);
  n.dong = m.dong;

  do {
    cout << "Nhập số cột: ";
    cin >> m.cot;
  } while (m.cot <= 0 || m.cot > MAX);

  n.cot = m.cot;

  cout << "Nhập giá trị ma trận 1" << endl;
  for (int i = 0; i < m.dong; i++) {
    for (int j = 0; j < m.cot; j++) {
      cout << "[" << i << "][" << j << "]: ";
      cin >> m.maTran[i][j];
    }
  }

  cout << "Nhập giá trị ma trận 2" << endl;
  for (int i = 0; i < n.dong; i++) {
    for (int j = 0; j < n.cot; j++) {
      cout << "[" << i << "][" << j << "]: ";
      cin >> n.maTran[i][j];
    }
  }
}

void xuatTong2MaTran(MaTran m, MaTran n) {
  for (int i = 0; i < m.dong; i++) {
    for (int j = 0; j < m.cot; j++) {
      cout << m.maTran[i][j] + n.maTran[i][j] << " ";
    }
    cout << endl;
  }
}

bool kiemTranMaTranDonVi(MaTran a) {
  bool flag = false;
  int sum = 0;
  int sum2 = 0;

  if (a.cot != a.dong) {
    flag = false;
  } else {
    for (int i = 0; i < a.dong; i++) {
      for (int j = 0; j < a.cot; j++) {
        if (i == j && a.maTran[i][j] == 1) {
          sum++;
        } else if (a.maTran[i][j] == 0) {
          sum2++;
        }
      }
    }
  }

  if (sum + sum2 == a.dong * a.cot) {
    flag = true;
  }

  return flag;
}

#include "header.h"

int nhapSoNguyenDuong(int &n) {
  do {
    cin >> n;
  } while (n <= 0);

  return n;
}

void nhapMaTranVuong(MaTranVuong &a) {
  cout << "Nhập bật của ma trận vuông (≤10): ";
  nhapSoNguyenDuong(a.n);
  for (int i = 0; i < a.n; i++) {
    for (int j = 0; j < a.n; j++) {
      cout << "[" << i << "][" << j << "]: ";
      cin >> a.list[i][j];
    }
  }
}

void xuatMaTranVuong(MaTranVuong a) {
  cout << "\n";
  for (int i = 0; i < a.n; i++) {
    for (int j = 0; j < a.n; j++) {
      cout << a.list[i][j] << " ";
    }
    cout << endl;
  }
}

int xuatTongPhanTuTamGiacDuoiPhai(MaTranVuong a) {
  int sum = 0;

  for (int i = 0; i < a.n; i++) {
    for (int j = 0; j < a.n; j++) {
      if (i + j > a.n - 2) {
        sum += a.list[i][j];
      }
    }
  }

  return sum;
}

int xuatPhanTuLonNhatTamGiaTrenTrai(MaTranVuong a) {
  int max = a.list[0][0];
  for (int i = 0; i < a.n; i++) {
    for (int j = 0; j < (a.n - i); j++) {
      if (a.list[i][j] > max) {
        max = a.list[i][j];
      }
    }
  }
  return max;
}

void xuatPhanTuDuongTamGiacDuoiPhai(MaTranVuong a) {
  for (int i = 0; i < a.n; i++) {
    for (int j = 0; j < a.n; j++) {
      if (i + j > a.n - 2 && a.list[i][j] > 0) {
        cout << a.list[i][j] << " ";
      }
    }
  }
}

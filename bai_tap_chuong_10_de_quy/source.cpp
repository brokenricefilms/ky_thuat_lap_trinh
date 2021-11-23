#include "header.h"

int nhapSoNguyenDuong(int &n) {
  do {
    cin >> n;
  } while (n <= 0);

  return n;
}

void nhapDaySo(DaySo &a) {
  cout << "\nSố lượng phần tử của dẫy số: ";
  nhapSoNguyenDuong(a.n);
  a.nBackup = a.n;
  for (int i = 0; i < a.n; i++) {
    cout << "\n[" << i << "]: ";
    cin >> a.list[i];
  }
}

void xuatDaySo(DaySo a) {
  for (int i = 0; i < a.n; i++) {
    cout << "\n[" << i << "]: " << a.list[i] << endl;
  }
}

int tinhTongPhanTu(DaySo &a) {
  if (a.n < 0) {
    return a.sum;
  }
  a.sum += a.list[a.n];
  a.n = a.n - 1;
  return tinhTongPhanTu(a);
}

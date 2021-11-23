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
  if (a.nBackup < 0) {
    a.nBackup = a.n;
    return a.sum;
  }
  a.sum += a.list[a.nBackup];
  a.nBackup = a.nBackup - 1;
  return tinhTongPhanTu(a);
}

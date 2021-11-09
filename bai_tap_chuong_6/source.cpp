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
  for (int i = 0; i < a.n; i++) {
    cout << "[" << i << "]: ";
    cin >> a.list[i];
  }
}

void xuatDaySo(DaySo a) {
  for (int i = 0; i < a.n; i++) {
    cout << "[" << i << "]: " << a.list[i] << endl;
  }
}

bool kiemTraSoAmLe(DaySo a) {
  bool flag = false;

  for (int i = 0; i < a.n; i++) {
    if (a.list[i] < 0 && a.list[i] % 2 == 1) {
      flag = true;
    }
  }

  return flag;
}

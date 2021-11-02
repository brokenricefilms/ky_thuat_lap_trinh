#include "header.h"

int nhapSoNguyenDuong(int &n) {
  do {
    cin >> n;
  } while (n <= 0);

  return n;
}

void nhapDaySo(DaySo &array) {
  cout << "Nhập dãy số phần tử: ";
  nhapSoNguyenDuong(array.n);

  for (int i = 0; i < array.n; i++) {
    cout << "a[" << i << "] = ";
    cin >> array.list[i];
  }
}

void xuatDS(DaySo array) {
  cout << "\n";
  for (int i = 0; i < array.n; i++) cout << array.list[i] << " ";
  cout << "\n";
}

int timPhanTuLopNhatTrongDaySo(DaySo array) {
  int MAX = array.list[0];

  for (int i = 1; i < array.n; i++) {
    if (array.list[i] > MAX) {
      MAX = array.list[i];
    }
  }

  return MAX;
}

int timViTriDauTienPhantuNhoNhat(DaySo array) {
  int firstLocationMin = 0;
  int min = array.list[0];
  for (int i = 1; i < array.n; i++) {
    if (array.list[i] < min) {
      min = array.list[i];
      firstLocationMin = i;
    }
  }
  return firstLocationMin;
}

bool kiemTraSoHoangThien(int number) {
  int sum = 0;
  int flag = false;

  for (int i = 1; i < number; i++) {
    if (number % i == 0) {
      sum += i;
    }
  }

  if (sum == number) {
    flag = true;
  } else {
    flag = false;
  }

  return flag;
}

int tinhTongPhanTuSoHoangThien(DaySo array) {
  int sum = 0;
  for (int i = 0; i < array.n; i++) {
    if (kiemTraSoHoangThien(array.list[i]) == true) {
      sum += array.list[i];
    }
  }
  return 0;
}

int timViTriDauTienPhantuDuong(DaySo array) {
  int location;
  bool flag = false;
  for (int i = 0; i < array.n; i++) {
    if (array.list[i] > 0 && flag == false) {
      location = i;
      flag = true;
    }
  }
  return location;
}

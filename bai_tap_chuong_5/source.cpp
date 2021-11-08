#include "header.h"

float xuatTongBieuThuc(int n) {
  float sum = 0;
  for (int i = 2; i <= n; i++) {
    sum += pow(-1, i) / i;
  }
  return sum;
}

int nhapSoNguyenDuong(int &n) {
  do {
    cin >> n;
  } while (n <= 0);

  return n;
}

bool kiemTraSoNguyenTo(int number) {
  bool flag = false;
  int count = 0;

  if (number < 2 || number > 100) {
    flag = false;
  } else {
    for (int i = 2; i <= number / 2; i++) {
      if (number % i == 0) {
        count++;
      }
    }
    if (count == 0) {
      flag = true;
    }
  }
  return flag;
}

void xuatSoNguyenToNhoHonN(int n) {
  for (int i = 2; i < n; i++) {
    if (kiemTraSoNguyenTo(i) == true) {
      cout << i << " ";
    }
  }
}

int xuatTongSoNguyenToNhoHonN(int n) {
  int sum = 0;
  for (int i = 2; i < n; i++) {
    if (kiemTraSoNguyenTo(i) == true) {
      sum += i;
    }
  }
  return sum;
}

void xuatNSoNguyenToDauTien(int n) {
  int count = 0;
  int i = 2;
  while (count != n) {
    if (kiemTraSoNguyenTo(i) == true) {
      cout << i << " ";
      count++;
    }
    i++;
  }
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

void xuatSoHoangThienNhoHonN(int n) {
  for (int i = 2; i < n; i++) {
    if (kiemTraSoHoangThien(i) == true) {
      cout << i << " ";
    }
  }
}

int xuatTongSoHoangThienNhoHonN(int n) {
  int sum = 0;
  for (int i = 2; i < n; i++) {
    if (kiemTraSoHoangThien(i) == true) {
      sum += i;
    }
  }
  return sum;
}

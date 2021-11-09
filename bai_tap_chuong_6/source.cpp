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
  for (int i = 0; i < a.n; i++) {
    if (a.list[i] < 0 && (a.list[i]) * (-1) % 2 == 1) {
      return true;
    }
  }
  return false;
}

bool kiemTraPhanTuLonNhat(DaySo a, int x) {
  for (int i = 0; i < a.n; i++) {
    if (a.list[i] > x) {
      return false;
    }
  }
  return true;
}

bool kiemTraDaySoTangDan(DaySo a) {
  int tmp = a.list[0];
  for (int i = 1; i < a.n; i++) {
    if (tmp > a.list[i]) {
      return false;
    }
  }
  return true;
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

bool kiemTraDaySoHoangThien(DaySo a) {
  for (int i = 0; i < a.n; i++) {
    if (kiemTraSoHoangThien(a.list[i]) == false) {
      return false;
    }
  }
  return true;
}

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

void nhapMaTranVuong(MaTran &m) {
  do {
    cout << "Nhập kích thước ma trận vuông: ";
    cin >> m.dong;
  } while (m.dong <= 0 || m.dong > MAX);

  m.cot = m.dong;

  cout << "Nhập giá trị ma trận" << endl;

  for (int i = 0; i < m.dong; i++) {
    for (int j = 0; j < m.cot; j++) {
      cout << "[" << i << "][" << j << "]: ";
      cin >> m.maTran[i][j];
    }
  }
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

bool kiemTraMaTranCoPhanTuSoNguyenTo(MaTran m) {
  for (int i = 0; i < m.dong; i++) {
    for (int j = 0; j < m.cot; j++) {
      if (kiemTraSoNguyenTo(m.maTran[i][j]) == true) {
        return true;
      }
    }
  }
  return false;
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

bool kiemTraMaTranDoiXung(MaTran m) {
  for (int i = 0; i < m.dong; i++) {
    for (int j = 0; j < m.cot; j++) {
      if (m.maTran[i][j] != m.maTran[j][i]) {
        return false;
      }
    }
  }
  return true;
}

void xuatCapNguyenDuongThoaPhuongTrinh(int a, int b, int c) {
  // 5) Tìm tất cả các cặp số nguyên dương (x , y) thỏa mãn: a*x + b*y = c; với
  // a, b, c là những số nguyên dương cho trước.

  for (int x = 0; x < a + b + c; x++) {
    for (int y = 0; y < a + b + c; y++) {
      if (a * x + b * y == c) {
        cout << "(" << x << ", " << y << ")\n";
      }
    }
  }
}

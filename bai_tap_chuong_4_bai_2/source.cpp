#include "header.h"

int nhapSoNguyenDuong(int &n) {
  do {
    cin >> n;
  } while (n <= 0);

  return n;
}

void nhapMaTranVuong(MaTranVuong &m) {
  for (int i = 0; i < m.kichThuoc; i++) {
    for (int j = 0; j < m.kichThuoc; j++) {
      cout << "[" << i << "][" << j << "]: ";
      cin >> m.matrix[i][j];
    }
  }
}

void xuatMaTranVuong(MaTranVuong m) {
  for (int i = 0; i < m.kichThuoc; i++) {
    for (int j = 0; j < m.kichThuoc; j++) {
      cout << m.matrix[i][j] << " ";
    }
    cout << "\n";
  }
}

int timGiaTriLonNhatDongK(MaTranVuong m, int k) {
  int max;

  for (int i = 0; i < m.kichThuoc; i++) {
    for (int j = 0; j < m.kichThuoc; j++) {
      if (i == k && m.matrix[i][j] > max) {
        max = m.matrix[i][j];
      }
    }
  }

  return max;
}

void xuatCacSoDuongTrongMaTran(MaTranVuong m) {
  for (int i = 0; i < m.kichThuoc; i++) {
    for (int j = 0; j < m.kichThuoc; j++) {
      if (m.matrix[i][j] > 0) {
        cout << m.matrix[i][j] << " ";
      }
    }
  }
}

int timGiaTriNhoNhatTrenDuongCheoChinh(MaTranVuong m) {
  int min;

  for (int i = 0; i < m.kichThuoc; i++) {
    if (m.matrix[i][i] < min) {
      min = m.matrix[i][i];
    }
  }

  return min;
}

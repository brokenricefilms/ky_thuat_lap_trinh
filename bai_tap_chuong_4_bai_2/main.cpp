// 2) Cho ma trận vuông có các phần tử là những số nguyên.
// – Tìm giá trị lớn nhất ở dòng k trong ma trận.
// – Tìm số các số dương có trong ma trận.
// – Tìm giá trị nhỏ nhất trên đường chéo chính của ma
// trận.
#include "header.h"

int main() {
  MaTranVuong m;

  cout << "Nhập kích thước của ma trận vuông (≤ 100): ";
  nhapSoNguyenDuong(m.kichThuoc);
  nhapMaTranVuong(m);
  xuatMaTranVuong(m);

  int k;
  cout << "\nNhập dòng cần tìm số lớn nhất (0++): ";
  nhapSoNguyenDuong(k);
  cout << "\nGiá trị lơn nhất trong dòng " << k
       << " là: " << timGiaTriLonNhatDongK(m, k) << endl;

  cout << "\nCác số dương có trong ma trận là: ";
  xuatCacSoDuongTrongMaTran(m);

  cout << "\nGiá trị nhỏ nhất trên đường chéo chính của ma trận là: " << timGiaTriNhoNhatTrenDuongCheoChinh(m) << endl;

  return 0;
}

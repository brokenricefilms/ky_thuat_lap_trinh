#include <cmath>
#include <iostream>
using namespace std;

// 2) Cho ma trận vuông có các phần tử là những số nguyên.

const int MAX = 100;

struct MaTranVuong {
  int matrix[MAX][MAX];
  int kichThuoc;
};

int nhapSoNguyenDuong(int &n);
void nhapMaTranVuong(MaTranVuong &m);
void xuatMaTranVuong(MaTranVuong m);

// – Tìm giá trị lớn nhất ở dòng k trong ma trận.

int timGiaTriLonNhatDongK(MaTranVuong m, int k);
// – Tìm số các số dương có trong ma trận.
void xuatCacSoDuongTrongMaTran(MaTranVuong m);
// – Tìm giá trị nhỏ nhất trên đường chéo chính của ma
// trận.
int timGiaTriNhoNhatTrenDuongCheoChinh(MaTranVuong m);

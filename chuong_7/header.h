#include <cmath>
#include <iostream>
using namespace std;

const int MAX = 10;

struct MaTranVuong {
  int list[MAX][MAX];
  int n;
};

int nhapSoNguyenDuong(int &n);
void nhapMaTranVuong(MaTranVuong &a);
void xuatMaTranVuong(MaTranVuong a);
int xuatTongPhanTuTamGiacDuoiPhai(MaTranVuong a);
int xuatPhanTuLonNhatTamGiaTrenTrai(MaTranVuong a);
void xuatPhanTuDuongTamGiacDuoiPhai(MaTranVuong a);

#include <cmath>
#include <iostream>
using namespace std;

const int MAX = 100;

struct DaySo {
  int list[MAX];
  int n;
};

int nhapSoNguyenDuong(int &n);
void nhapDaySo(DaySo &array);
void xuatDS(DaySo array);
int timPhanTuLopNhatTrongDaySo(DaySo array);
// – Tìm vị trí đầu tiên của phần tử nhỏ nhất trong dãy số.
int timViTriDauTienPhantuNhoNhat(DaySo array);
// – Tính tổng các phần tử là số hoàn thiện trong dãy số.
int tinhTongPhanTuSoHoangThien(DaySo array);
// – Tìm vị trí đầu tiên của phần tử dương trong dãy số.
int timViTriDauTienPhantuDuong(DaySo array);

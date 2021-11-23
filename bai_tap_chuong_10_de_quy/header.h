#include <cmath>
#include <iostream>
using namespace std;

const int MAX = 100;

struct DaySo {
  int list[MAX];
  int n;
  int sum = 0;
  int nBackup;
};

int nhapSoNguyenDuong(int &n);
void nhapDaySo(DaySo &a);
void xuatDaySo(DaySo a);
int tinhTongPhanTu(DaySo &a);

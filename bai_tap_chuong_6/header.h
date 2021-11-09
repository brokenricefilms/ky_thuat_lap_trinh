#include <cmath>
#include <iostream>
using namespace std;

// 1) Cho một dãy số nguyên x có n phần tử.
// - Xét xem dãy số nguyên x có phần tử nào là số âm lẻ hay không?
// - Xét xem số nguyên a có phải là số lớn hơn số lớn nhất trong dãy số x hay
// không.
// - Xét xem dãy số nguyên x có được sắp thứ tự tăng dần hay không?
// - Xét xem dãy số nguyên x có phải là dãy số hoàn thiện hay không?
// jj
// 2) Kiểm tra ma trận có phần tử nào là số nguyên tố hay không?
//
// 3) Kiểm tra một ma trận vuông có phải là ma trận đơn vị hay không.
//
// 4) Kiểm tra một ma trận vuông có phải là ma trận đối xứng qua đường chéo
// chính hay không.
//
// 5) Tìm tất cả các cặp số nguyên dương (x , y) thỏa mãn: a*x
// + b*y = c; với a, b, c là những số nguyên dương cho trước.
//
// 6) Kiểm tra dãy số
// có tồn tại phần tử cực tiểu hay không? Phần tử cực tiểu là phần tử nhỏ hơn
// hai phần tử kề nó.

const int MAX = 100;

struct DaySo {
  int list[MAX];
  int n;
};

struct MaTran {
  int maTran[MAX][MAX];
  int dong;
  int cot;
};

int nhapSoNguyenDuong(int &n);
int nhapSoPhanTuCuaDaySo(DaySo &a);
void nhapDaySo(DaySo &a);
void xuatDaySo(DaySo a);
bool kiemTraSoAmLe(DaySo a);
bool kiemTraPhanTuLonNhat(DaySo a, int x);
bool kiemTraDaySoTangDan(DaySo a);
bool kiemTraSoHoangThien(int number);
bool kiemTraDaySoHoangThien(DaySo a);
void nhapMaTran(MaTran &m);
void xuatMaTran(MaTran m);
void nhapMaTranVuong(MaTran &m);
bool kiemTraSoNguyenTo(int number);
bool kiemTraMaTranCoPhanTuSoNguyenTo(MaTran m);
bool kiemTranMaTranDonVi(MaTran a);
bool kiemTraMaTranDoiXung(MaTran a);

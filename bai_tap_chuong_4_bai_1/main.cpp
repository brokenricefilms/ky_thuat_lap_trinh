// 1) Cho một dãy số nguyên.:
// – Tìm giá trị của phần tử lớn nhất trong dãy số.
// – Tìm vị trí đầu tiên của phần tử nhỏ nhất trong dãy số.
// – Tính tổng các phần tử là số hoàn thiện trong dãy số.
// – Tìm vị trí đầu tiên của phần tử dương trong dãy số.

#include "header.h"

int main() {
  DaySo array;

  nhapDaySo(array);
  xuatDS(array);

  cout << "\nPhần tử lớn nhất trong dãy số là: "
       << timPhanTuLopNhatTrongDaySo(array) << endl;

  cout << "\nVị trí đầu tiên của phần tử nhỏ nhất trong dãy số: "
       << timViTriDauTienPhantuNhoNhat(array) << endl;

  cout << "\nTổng các phần tử là số hoàn thiện trong dãy số: "
       << timPhanTuLopNhatTrongDaySo(array) << endl;

  cout << "\nVị trí đầu tiên của phần tử dương trong dãy số: "
       << timViTriDauTienPhantuDuong(array) << endl;

  return 0;
}

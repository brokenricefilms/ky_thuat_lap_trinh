#include "header.h"

int main() {
  DaySo a;
  nhapDaySo(a);

  if (kiemTraSoAmLe(a) == true) {
    cout << "\n Dãy số có số âm lẻ\n";
  } else {
    cout << "\n Dãy số không có số âm lẻ\n";
  }

  int x;
  cout << "\n Kiểm tra x có phải là số lơn nhất. x = ";
  cin >> x;
  if (kiemTraPhanTuLonNhat(a, x) == true) {
    cout << x << " là số lớn nhất trong dãy số\n";
  } else {
    cout << x << " không là số lớn nhất trong dãy số\n";
  }

  if (kiemTraDaySoTangDan(a) == true) {
    cout << "\n Dãy số được sắp xếp theo thứ tự tăng dần\n";
  } else {
    cout << "\n Dãy số không được sắp xếp theo thứ tự tăng dần\n";
  }

  if (kiemTraDaySoHoangThien(a) == true) {
    cout << "\n Dãy số là dãy số hoàng thiện\n";
  } else {
    cout << "\n Dãy số không là dãy số hoàng thiện\n";
  }

  MaTran m;

  nhapMaTran(m);

  if (kiemTraMaTranCoPhanTuSoNguyenTo(m) == true) {
    cout << "\n Ma trận có số nguyên tố\n";
  } else {
    cout << "\n Ma trận không có số nguyên tố\n";
  }

  MaTran mt;

  nhapMaTranVuong(mt);

  if (kiemTranMaTranDonVi(mt) == true) {
    cout << "Ma trận là ma trận đơn vị" << endl;
  } else {
    cout << "Ma trận không phải ma trận đơn vị" << endl;
  }

  if (kiemTraMaTranDoiXung(mt) == true) {
    cout << "Ma trận là ma trận đối xứng" << endl;
  } else {
    cout << "Ma trận không là ma trận đối xứng" << endl;
  }

  return 0;
}

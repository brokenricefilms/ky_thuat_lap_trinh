#include "header.h"

int main() {
  MaTranVuong a;

  nhapMaTranVuong(a);
  xuatMaTranVuong(a);

  cout << "\n Tổng phần tử tam giác dưới bên phải là: "
       << xuatTongPhanTuTamGiacDuoiPhai(a) << endl;

  cout << "\n Phần tử lớn nhất tam giác trên trái ma trận vuông là: "
       << xuatPhanTuLonNhatTamGiaTrenTrai(a) << endl;

  cout << "\n Phần tử dương tam giác dưới phải: ";
  xuatPhanTuDuongTamGiacDuoiPhai(a);
  return 0;
}

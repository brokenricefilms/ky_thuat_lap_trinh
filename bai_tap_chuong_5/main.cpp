#include "header.h"

int main() {
  int a;
  cout << "1/2 - 1/3 + ... + (-1)ⁿ/n" << endl;
  cout << "\nNhập a (a>1): ";
  cin >> a;
  cout << "\nTổng của biểu thức là " << xuatTongBieuThuc(a) << endl;

  cout << "\n\n";
  int n;
  cout << "nhập n: ";
  cin >> n;
  cout << "các số nguyên tố nhở hơn n là: ";
  xuatSoNguyenToNhoHonN(n);

  cout << "\nTổng các số nguyên tố nhỏ hơn n là: "
       << xuatTongSoNguyenToNhoHonN(n) << endl;

  cout << "\nXuất n số nguyên tố đầu tiên. n = ";
  cin >> n;
  cout << "\n" << n << " số nguyên tố đầu tiên là: ";
  xuatNSoNguyenToDauTien(n);

  cout << "\nnhập n: ";
  cin >> n;
  cout << "các số hoàng thiện nhở hơn n là: ";
  xuatSoHoangThienNhoHonN(n);

  cout << "\nTổng các số hoàng thiện nhỏ hơn n là: "
       << xuatTongSoHoangThienNhoHonN(n) << endl;

  return 0;
}

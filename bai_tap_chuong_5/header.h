#include <cmath>
#include <iostream>
using namespace std;

// 1. Viết chương trình cho phép nhập vào một số nguyên dương n (n>1). Tính giá
// trị của biểu thức sau: 1/2 - 1/3 + ... + (-1)ⁿ/n
// 2. Viết chương trình cho phép nhập vào một số nguyên n (0<n) và thực hiện các
// yêu cầu sau:
// - Kiểm tra n có phải là số hoàn thiện hay không?
// - Liệt kê các số hoàn thiện nhỏ hơn n.
// - Tính tổng các số hoàn thiện nhỏ hơn n.
// 3. Viết chương trình cho phép nhập vào một số nguyên n (0<n) và thực hiện các
// yêu cầu sau:
// - Kiểm tra n có phải là số nguyên tố hay không?
// - In ra các số nguyên tố nhỏ hơn n.
// - Tính tổng các số nguyên tố nhỏ hơn n.
// - Liệt kê n số nguyên tố đầu tiên.

float xuatTongBieuThuc(int n);
int nhapSoNguyenDuong(int &n);
bool kiemTraSoNguyenTo(int number);
void xuatSoNguyenToNhoHonN(int n);
int xuatTongSoNguyenToNhoHonN(int n);
void xuatNSoNguyenToDauTien(int n);
bool kiemTraSoHoangThien(int number);
int xuatTongSoHoangThienNhoHonN(int n);
void xuatSoHoangThienNhoHonN(int n);

#include "header.h"

int main() {
  DaySo a;
  nhapDaySo(a);

  if (kiemTraSoAmLe(a) == true) {
    cout << "\n Dãy số có số âm lẻ\n";
  } else {
    cout << "\n Dãy số không có số âm lẻ\n";
  }

  xuatDaySo(a);

  return 0;
}

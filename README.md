# Kỹ thuật lập trình

## Chương 1

### Bài 1

Viết chương trình cho phép nhập vào điểm hai môn toán, văn. Tính điểm trung bình hai môn theo tiêu chí: đtb=(toán*2 + văn)/3. Cho biết kết quả là đậu hay rớt, biết rằng nếu đtb >=5 là đậu, nếu đtb<5 là rớt.


```cpp
#include <iostream>
using namespace std;
void main(){
  float toan, van, dtb;

  do {
    cout << "Nhap diem toan: ";
    cin >> toan;
    if (toan < 0 || toan > 10){
      cout << "Diem ban nhap khong hop le. Vui long nhap lai.\n";
    }
  } while (toan < 0 || toan > 10);

  do {
    cout << "Nhap diem van: ";
    cin >> van;
    if (van < 0 || van > 10){
      cout << "Diem ban nhap khong hop le. Vui long nhap lai.\n";
    }
  } while (van < 0 || van > 10);

  dtb = (toan * 2 + van) / 3;
  if (dtb >= 5){
    cout << "Ban da dau roi.";
  }else{
    cout << "Ban da rot roi.";
  }
}
```

### Bài 2

Viết chương trình cho phép nhập vào 2 số nguyên, sau đó cho phép người dùng lựa chọn bằng cách nhập 1 số. Nếu số nhập vào là 1, tính tổng hai số. Nếu số nhập vào là 2, tính tích hai số. Nếu số nhập vào là 3, tính hiệu hai số. Nếu số nhập vào là 4, tính thương của hai số.

```cpp
#include <iostream>
using namespace std;
void main(){
  int a, b;
  int phepTinh;

  cout << "Nhap 2 so a va b: ";
  cin >> a >> b;

  do {
    cout << "Nhap phep tinh (1-4): ";
    cin >> phepTinh;
    if (phepTinh < 1 || phepTinh > 4){
      cout << "Phep tinh khong dung. Vui long nhap lai.\n";
    }
  } while (phepTinh < 1 || phepTinh > 4);

  switch (phepTinh){
    case 1:
      cout << a << " + " << b << " = " << (a + b);
      break;
    case 2:
      cout << a << " * " << b << " = " << (a * b);
      break;
    case 3:
      cout << a << " - " << b << " = " << (a - b);
      break;
    case 4:
      if (b == 0){
        cout << "Khong the chia cho 0";
      }else{
        cout << a << " / " << b << " = " << (a * 1.0 / b);
      }
      break;
  }
}
```

### Bài 3

Viết chương trình cho phép nhập vào điểm số 3 môn học: toán, văn, ngoại ngữ. Tính điểm trung bình theo tiêu chí: **dtb=(toán *3 + văn*2 + ngoại ngữ)/6**
Hãy cho biết kết quả xếp loại biết rằng:
- Nếu đtb>=8 và không có môn nào dưới 6.5, xếp loại giỏi.
- Nếu 7=<đtb<8 và không có môn nào dưới 5, xếp loại khá.
- Nếu 5=<đtb<7 và không có môn nào dưới 3.5, xếp loại trung bình.
- Nếu đtb<5, xếp loại yếu.

```cpp
#include <iostream>
using namespace std;
void main(){
  float toan, van, nn, dtb;

  do {
    cout << "Nhap diem toan, van, nn: ";
    cin >> toan >> van >> nn;
    if ((toan < 0 || toan > 10) || (van < 0 || van > 10) || (nn < 0 || nn > 10)){
      cout << "Diem nhap vao khong hop le. Vui long nhap lai.\n";
    }
  } while ((toan < 0 || toan > 10) || (van < 0 || van > 10) || (nn < 0 || nn > 10));

  dtb = ((toan * 3) + (van * 2) + nn) / 6;
  if (dtb >= 8){
    if (toan >= 6.5 && van >= 6.5 && nn >= 6.5){
      cout << "Gioi";
    }else{
      cout << "Khong the xep loai";
    }
  }if (dtb >= 7){
    if (toan >= 5 && van >= 5 && nn >= 5){
      cout << "Kha";
    }else{
      cout << "Khong the xep loai";
    }
  }else if (dtb >= 5){
    if (toan >= 3.5 && van >= 3.5 && nn >= 3.5){
      cout << "Trung binh";
    }else{
      cout << "Khong the xep loai";
    }
  }else{
    cout << "Yeu";
  }
}
```

#### Bài 5

Viết chương trình cho phép nhập vào một số nguyên dương n (n>1). Tính giá trị của biểu thức sau:
1/2+1/3+…+1/𝑛


```cpp
#include <iostream>
using namespace std;
void main(){
  int n;
  float s = 0;
  //Nhap n
  do{
    cout << "Nhap n > 1: ";
    cin >> n;
  } while(n <= 1);
  //Tinh s
  for (int i = 2; i <= n; i++){
    s += 1.0/i;
  }
  cout << "s = " << s;
}
```


## Chương 2

### Bài 1

Viết chương trình cho phép nhập vào một số nguyên dương n (n>1).

Tính giá trị của biểu thức sau:
1/2-1/3+1/4…+(-1)^n/n

```cpp
#include <iostream>
using namespace std;

void nhapN(int &n){
	do{
		cout << "Nhap n>1: ";
		cin >> n;
		if (n <= 1){
			cout << "Khong hop le. Vui long nhap lai.\n";
		}
	} while(n <= 1);
}

float tinhBt(int n){
	float s = 0.0;
	float tu = 1.0;
	for (int i = 2; i <= n; i++){
		s += tu / i;
		tu *= -1;
	}
	return s;
}

void main(){
	int n;
	nhapN(n);
	cout << "s = " << tinhBt(n);
}
```

### Bài 3

Viết chương trình cho phép nhập vào một số nguyên n (0<n) và thực hiện các yêu cầu sau:

–Kiểm tra n có phải là số nguyên tố hay không?
–In ra các số nguyên tố nhỏ hơn n.
–Tính tổng các số nguyên tố nhỏ hơn n.
–Liệt kê n số nguyên tố đầu tiên.

```cpp
#include <iostream>
using namespace std;

int nhapN(){
	int n;
	do{
		cout << "Nhap n>0: ";
		cin >> n;
		if (n <= 0){
			cout << "Khong hop le. Nhap lai.\n";
		}
	}while(n <= 0);
	return n;
}

// Hàm Kiểm tra n có phải là số nguyên tố hay không?
int kiemTraSnt(int n){
	if (n == 1){
		return 0;
	}
	for (int i = 2; i < n; i++){
		if (n % i == 0){
			return 0;
		}
	}
	return 1;
}

// Hàm In ra các số nguyên tố nhỏ hơn n
void inCacSntNhoHonN(int n){
	cout << "Cac so nguyen to nho hon " << n " la: ";
	for (int i = 2; i < n; i++){
		if (kiemTraSnt(i) == 1){
			cout << i << '\t';
		}
	}
}

// Hàm Tính tổng các số nguyên tố nhỏ hơn n
int tinhTongCacSntNhoHonN(int n){
	int tong = 0;
	for (int i = 2; i < n; i++){
		if (kiemTraSnt(i) == 1){
			tong += i;
		}
	}
	return tong;
}

// Hàm Liệt kê n số nguyên tố đầu tiên
void lietKeNSntDauTien(int n){
	cout << n << " so nguyen to dau tien la: ";
	int i = 2;
	while(n > 0){
		if (kiemTraSnt(i) == 1){
			cout << i << '\t';
			n--;
		}
		i++;
	}
}

void main(){
	int n = nhapN();

	if (kiemTraSnt(n) == 1){
		cout << n << " la so nguyen to.\n";
	}else{
		cout << n << " khong phai la so nguyen to.\n";
	}

	inCacSntNhoHonN(n);

	cout << "Tong cac so nguyen to nho hon " << n << " la: " << tinhTongCacSntNhoHonN(n) << endl;

	lietKeNSntDauTien(n);
}
```

```cpp
#include <iostream>
using namespace std;
// 4. Viết chương trình tính kết quả biểu thức s = 1!/1 + 2!/2 + 3!/3 + ... + n!/n (hàm main, hàm tính s)

long tinhS(int n) {
	long tong = 0;
	for (int i = 1; i <= n; i++) {
		long tu = 1;
		for (int j = 1; j <= i; j++) {
			tu *= j;
		}
		tong += tu / i;
	}
	return tong;
}

long tinhS2(int n) {
	long tong = 0;
	for (int i = 1; i <= n; i++) {
		long tu = 1;
		for (int j = 2; j < i; j++) {
			tu *= j;
		}
		tong += tu;
	}
	return tong;
}

void main() {
	int n;
	do {
		cout << "Nhap n >= 1: ";
		cin >> n;
		if (n < 1) {
			cout << "Khong hop le. Nhap lai.\n";
		}
	} while (n < 1);

	cout << "S = " << tinhS2(n) << endl;

	system("pause");
}

#include <iostream>
using namespace std;
// 6. Viết chương trình yêu cầu người dùng nhập liên tục các số nguyên từ bàn phím cho tới khi nhập 0 thì dừng.
// Tìm và trả về số lớn nhất trong những số vừa nhập (2 hàm là hàm main và hàm nhập tìm max)
int nhapTimMax() {
	int n;
	int max;
	int flag = 0;
	do {
		cout << "Nhap mot so (nhap 0 de dung lai): ";
		cin >> n;
		if (flag == 0) {
			max = n;
			flag = 1;
		}
		else {
			if (n > max) {
				max = n;
			}
		}
		if (n == 0) {
			cout << "Ban vua nhap 0. Dung nhap.\n";
		}
	} while (n != 0);

	return max;
}
void main() {
	int max = nhapTimMax();
	cout << "So lon nhat ban vua nhap la: " << max << endl;
	system("pause");
}

#include <iostream>
using namespace std;
// 5. Viết chương trình nhập vào 1 số thập phân, in ra số đó trong hệ nhị phân (hàm main, hàm in)
void inRaSoNhiPhan(int n) {
	cout << n << " trong he nhi phan la: ";
	if (n == 0) {
		cout << "0";
		return;
	}
	int a[32];
	int i = 31;
	while (n > 0)
	{
		a[i] = n % 2;
		n /= 2;
		i--;
	}
	i++;
	for (; i < 32; i++) {
		cout << a[i];
	}
	cout << endl;
}
void main() {
	int n;
	do {
		cout << "Nhap n >= 0: ";
		cin >> n;
		if (n < 0) {
			cout << "Khong hop le. Nhap lai.\n";
		}
	} while (n < 0);
	inRaSoNhiPhan(n);
	system("pause");
}
```

## Con trỏ

```cpp
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
// 1. Đảo ngược các ký tự trong chuỗi
void daoNguocChuoi(char* s) {
	int len = strlen(s);
	for (int i = 0; i < len / 2; i++) {
		char tmp = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = tmp;
	}
}

// 2. Thực hiện việc tách một chuỗi họ tên thành họ lót và tên theo tên người Việt Nam
void tachHoLotVaTen(char* s, char* hoLot, char* ten) {
	int len = strlen(s);
	int i = len;
	while (s[i] != ' ') {
		i--;
	}
	for (int j = 0; j < i; j++) {
		hoLot[j] = s[j];
	}
	hoLot[i] = '\0';
	for (int j = 0; i + 1 + j <= len; j++) {
		ten[j] = s[i + 1 + j];
	}
}

// 3. Thực hiện việc xoá num ký tự trong chuỗi s bắt đầu từ vị trí pos
void xoaNumKyTuTuViTriPos(char* s, int num, int pos) {
	strcpy(s + pos, s + pos + num);
}

// 4. Thực hiện việc chèn chuỗi sub vào chuỗi s tại vị trí pos
void chenChuoiSubVaoViTriPos(char* s, char* sub, int pos) {
	char* tmp = new char[50];
	strcpy(tmp, s + pos);
	strcpy(s + pos, sub);
	strcat(s, tmp);
}

// 5. Tìm tất cả vị trí xuất hiện của chuỗi con sub trong chuỗi mẹ s
void timTatCaViTriCuaChuoiConSub(char* s, char* sub) {
	cout << "Vi tri cua cac chuoi con sub: ";
	int len = strlen(s);
	int i = 0;
	char* p;
	while (i < len && (p = strstr(s + i, sub)) != NULL) {
		int vt = len - strlen(p);
		cout << vt << '\t';
		i = vt + 1;
	}
}

// 6. Thực hiện việc đảo ngược các từ có trong câu
void daoNguocCacTu(char* s) {
	daoNguocChuoi(s);
	int len = strlen(s);
	int i = 0, j = 0;
	for (; i <= len; i++) {
		if (s[i] == ' ' || s[i] == '\0') {
			int wordLen = i - j;
			for (int k = 0; k < wordLen / 2; k++) {
				char tmp = s[j + k];
				s[j + k] = s[i - 1 - k];
				s[i - 1 - k] = tmp;
			}
			j = i + 1;
		}
	}
}

// 7. Thực hiện kiểm tra chuỗi s có tuần hoàn với chu kỳ n hay không (n là số nguyên dương)
int kiemTraChuoiTuanHoanChuKyN(char* s, int n) {
	int len = strlen(s);
	if (len % n != 0) {
		return 0;
	}
	else {
		for (int i = n; i < len; i += n) {
			for (int j = 0; j < n; j++) {
				if (s[j] != s[i + j]) {
					return 0;
				}
			}
		}
	}
	return 1;
}


void main() {
	char* s = new char[50];
	cout << "Nhap chuoi s: ";
	cin.getline(s, 49);
	cout << "Chuoi vua nhap: \"" << s << "\"\n";

	//daoNguocChuoi(s);
	//cout << "Chuoi vua dao nguoc: \"" << s << "\"\n";

	/*char* hoLot = new char[50];
	char* ten = new char[50];
	tachHoLotVaTen(s, hoLot, ten);
	cout << "Ho lot: \"" << hoLot << "\"\n";
	cout << "Ten: \"" << ten << "\"\n";*/

	/*int num, pos;
	int len = strlen(s);
	do {
		cout << "Nhap num: ";
		cin >> num;
		cout << "Nhap pos: ";
		cin >> pos;
		if (pos < 0 || pos >= len || num <= 0 || pos + num > len) {
			cout << "num va pos khong hop le. Nhap lai.\n";
		}
	} while (pos < 0 || pos >= len || num <= 0 || pos + num > len);
	xoaNumKyTuTuViTriPos(s, num, pos);
	cout << "Chuoi sau khi xoa: \"" << s << "\"\n";*/

	/*int pos;
	char* sub = new char[50];
	int len = strlen(s);
	do {
		cout << "Nhap pos: ";
		cin >> pos;
		cin.ignore();
		cout << "Nhap sub: ";
		cin.getline(sub, 49);
		if (pos < 0 || pos > len || len + strlen(sub) > 49) {
			cout << "pos va sub khong hop le. Nhap lai.\n";
		}
	} while (pos < 0 || pos > len || len + strlen(sub) > 49);
	chenChuoiSubVaoViTriPos(s, sub, pos);
	cout << "Chuoi sau khi chen: \"" << s << "\"\n";*/

	/*char* sub = new char[50];
	cout << "Nhap sub: ";
	cin.getline(sub, 49);
	timTatCaViTriCuaChuoiConSub(s, sub);*/

	//daoNguocCacTu(s);
	//cout << "Chuoi sau khi dao nguoc tu: \"" << s << "\"\n";

	/*int n;
	int len = strlen(s);
	do {
		cout << "Nhap n > 0, n < " << len << ": ";
		cin >> n;
		if (n <= 0 || n >= len) {
			cout << "Khong hop le. Nhap lai.\n";
		}
	} while (n <= 0 || n >= len);
	if (kiemTraChuoiTuanHoanChuKyN(s, n) == 1) {
		cout << "Chuoi s tuan hoan theo chu ky " << n << endl;
	}
	else {
		cout << "Chuoi s KHONG tuan hoan theo chu ky " << n << endl;
	}*/

	system("pause");
}
```

## Chương 4

### bài 1

```cpp
// Bài 4.1
#include <iostream>
using namespace std;
#define KTM 50

// Cho một dãy số nguyên
struct DaySo {
	int arr[KTM];
	int n;
};

// Tìm giá trị của phần tử lớn nhất trong dãy số
int timMax(DaySo ds) {
	int max = ds.arr[0];
	for (int i = 1; i < ds.n; i++) {
		if (ds.arr[i] > max) {
			max = ds.arr[i];
		}
	}
	return max;
}

// Tìm vị trí đầu tiên của phần tử nhỏ nhất trong dãy số
int timViTriMinDauTien(DaySo ds) {
	int vtMin = 0;
	for (int i = 1; i < ds.n; i++) {
		if (ds.arr[i] < ds.arr[vtMin]) {
			vtMin = i;
		}
	}
	return vtMin;
}

// Tính tổng các phần tử là số hoàn thiện trong dãy số
bool kiemTraSht(int n) {
	int tong = 0;
	for (int i = 1; i < n; i++) {
		if (n % i == 0) {
			tong += i;
		}
	}
	return tong == n;
}
int tinhTongSht(DaySo ds) {
	int tong = 0;
	for (int i = 0; i < ds.n; i++) {
		if (kiemTraSht(ds.arr[i]) == true) {
			tong += ds.arr[i];
		}
	}
	return tong;
}

// Tìm vị trí đầu tiên của phần tử dương trong dãy số
int timViTriDuongDauTien(DaySo ds) {
	for (int i = 0; i < ds.n; i++) {
		if (ds.arr[i] > 0) {
			return i;
		}
	}
	return -1;
}

void main() {
	DaySo ds = {
		{7, 5, 3, 8, 4, 9, 2, 6},
		8
	};
	cout << "Max = " << timMax(ds) << endl;
	system("pause");
}
```

### bài 2

```cpp
// Bài 4.2
#include <iostream>
using namespace std;
#define KTM 50

// Cho ma trận vuông có các phần tử là những số nguyên
struct MTVuong {
	int arr[KTM][KTM];
	int n;
};

// Tìm giá trị lớn nhất ở dòng k trong ma trận
int timMaxDongK(MTVuong mt, int k) {
	int max = mt.arr[k][0];
	for (int i = 1; i < mt.n; i++) {
		if (mt.arr[k][i] > max) {
			max = mt.arr[k][i];
		}
	}
	return max;
}

// Tìm số các số dương có trong ma trận
int demSoDuong(MTVuong mt) {
	int dem = 0;
	for (int i = 0; i < mt.n; i++) {
		for (int j = 0; j < mt.n; j++) {
			if (mt.arr[i][j] > 0) {
				dem++;
			}
		}
	}
	return dem;
}

// Tìm giá trị nhỏ nhất trên đường chéo chính của ma trận
int timMin(MTVuong mt) {
	int min = mt.arr[0][0];
	for (int i = 1; i < mt.n; i++) {
		if (mt.arr[i][i] < min) {
			min = mt.arr[i][i];
		}
	}
	return min;
}

void main() {
	system("pause");
}
```

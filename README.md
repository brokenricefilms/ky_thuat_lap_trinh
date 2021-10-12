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

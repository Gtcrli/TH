#include <iostream>
#include <cmath>

using namespace std;

// Nhập vào một số, tính căn bậc hai của nó và in ra màn hình
void BT1() {
	double a;
	cout << "Nhap so can tinh can bac 2: ";
	cin >> a;
	cout << "Can bac 2 cua " << a << " la: " << sqrt(a) << endl;
}

// Nhập vào 3 cạnh của một tam giác, in ra chu vi và diện tích của nó
void BT2() {
	double a, b, c, p;
	cout << "Nhap 3 canh cua tam giac: ";
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b) {
		cout << "Chu vi cua tam giac la: " << a + b + c << endl;
		p = (a + b + c) / 2;
		cout << "Dien tich cua tam giac la: " << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;
	}
	else {
		cout << "Khong ton tai tam giac tu 3 canh da nhap" << endl;
	}

}

// 4) Nhập vào số giây, đổi ra giờ, phút và giây. Ví dụ số giây là 3721, đổi thành 1 giờ, 2 phút, 1 giây.
void BT4() {
	int a, b, c, d;
	cout << "Nhap so giay can doi: ";
	cin >> a;
	b = a / 3600;
	c = (a - 3600 * b) / 60;
	d = a - 3600 * b - 60 * c;
	cout << a << " giay bang: " << b << " gio, " << c << " phut, " << d << " giay" << endl;
}

// 5) Nhập vào một số, tính căn bậc 5 của số đó.
void BT5() {
	double a;
	cout << "Nhap so can tinh can bac 5: ";
	cin >> a;
	cout << "Can bac 5 cua "<< a << " la: " << pow(a, 0.2) << endl;
}

/*7) Nhập vào số điện tiêu thụ trong một tháng(trên 300kw), tính số tiền phải trả, biết đơn giá điện như sau :
- 100 kw đầu tiên tính giá 1800
- 100 kw kế tiếp tính giá 2100
- 50kw kế tiếp tính giá 2250
- 50kw kế tiếp tính giá 2450
- 100kw kế tiếp tính giá 2800
- các kw còn lại tính giá 3000
Số tiền phải trả bằng số tiền điện tiêu thụ cộng thêm 10 % thuế GTGT trên số tiền tiêu thụ.
*/ 
void BT7() {
	int a, tiendien;
	cout << "Nhap so dien tieu thu trong 1 thang: ";
	cin >> a;
	if (a <= 100) {
		tiendien = a * 1800;
	}
	else if (a <= 200) {
		tiendien = 100 * 1800 + (a - 100) * 2100;
	}
	else if (a <= 250) {
		tiendien = 100 * 1800 + 100 * 2100 + (a - 200) * 2250;
	}
	else if (a <= 300) {
		tiendien = 100 * 1800 + 100 * 2100 + 50 * 2250 + (a - 250) * 2450;
	}
	else if (a <= 400) {
		tiendien = 100 * 1800 + 100 * 2100 + 50 * 2250 + 50 * 2450 + (a - 300) * 2800;
	}
	else {
		tiendien = 100 * 1800 + 100 * 2100 + 50 * 2250 + 50 * 2450 + 100 * 2800 + (a - 400) * 3000;
	}
	cout << "So tien dien phai tra la: " << 1.1 * tiendien << endl;
}

int main() {
	int n;
	cout << "Nhap bai tap: ";
	cin >> n;
	switch (n) {
	case 1: BT1(); break;
	case 2: BT2(); break;
	case 4: BT4(); break;
	case 5: BT5(); break;
	case 7: BT7(); break;
	}
	return 0;
}
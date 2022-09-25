#include <iostream>
#include <cmath>

using namespace std;
//1) Viết chương trình nhập vào tọa độ 4 đỉnh a, b, c và d của một tứ giác. In ra chu vi và diện tích của tứ giác đó.
void BT1() {
	double x, y, m, n, g, h, u, v, AB, BC, CD, DA, AC, BD, p1, p2;
	cout << "Nhap toa do (x, y) cua A: "; cin >> x >> y;
	cout << "Nhap toa do (x, y) cua B: "; cin >> m >> n;
	cout << "Nhap toa do (x, y) cua C: "; cin >> g >> h;
	cout << "Nhap toa do (x, y) cua D: "; cin >> u >> v;
	AB = sqrt((m - x) * (m - x) + (n - y) * (n - y));
	BC = sqrt((g - m) * (g - m) + (h - n) * (h - n));
	CD = sqrt((u - g) * (u - g) + (v -h) * (v - h));
	DA = sqrt((x - u) * (x - u) + (y -v) * (y - v));
	AC = sqrt((g - x) * (g - x) + (h - y) * (h - y));
	BD = sqrt((u - m) * (u - m) + (v - n) * (v - n));
	cout << "Chu vi cua tu giac la: " << AB + BC + CD + DA << endl;
	p1 = (AB + BC + AC) / 2;
	p2 = (AC + CD + DA) / 2;
	cout << "Dien tich cua tu giac la: " << sqrt(p1 * (p1 - AB) * (p1 - BC) * (p1 - AC)) + sqrt(p2 * (p2 - AC) * (p2 - CD) * (p2 - DA));
}


/*2) Nhập vào thời gian thực hiện công việc làm nhanh nhất A và thời gian thực hiện công việc chậm nhất B. 
Thời gian được nhập gồm số lượng giờ, phút và giây. 
Cho biết thời gian trung bình để thực hiện một công việc. */
void BT2() {
	int a, b, c, d, e, gio, phut;
	double f, tong, giay;
	cout << "Nhap thoi gian thuc hien cong viec nhanh nhat ? gio, ? phut, ?giay: "<< endl;
	cout << "Gio "; cin >> a;
	cout << "Phut "; cin >> b;
	cout << "Giay "; cin >> c;
	cout << "Nhap thoi gian thuc hien cong viec cham nhat ? gio, ? phut, ?giay: "<<endl;
	cout << "Gio "; cin >> d;
	cout << "Phut "; cin >> e;
	cout << "Giay "; cin >> f;
	tong = (a * 3600 + b * 60 + c + d * 3600 + e * 60 + f) / 2;
	gio = tong / 3600;
	phut = (tong - 3600 * gio) / 60;
	giay = tong - 3600 * gio - 60 * phut;
	cout << "Thoi gian lam viec trung binh la: " << gio << " gio, " << phut << " phut, " << giay << " giay" << endl;
}	

//3) Viết chương trình nhập vào một số nguyên dương có 5 chữ số. In ra màn hình tổng các chữ số của số đó
void BT3() {
	int x, a, b, c, d, e;
	cout << "Nhap so nguyen duong co 5 chu so: "; cin >> x;
		if (x < 10000 || x > 99999) {
			cout << "Nhap sai so" << endl;
		}
		else {
			a = x / 10000;
			b = (x % 10000) / 1000;
			c = ((x % 10000) % 1000) / 100;
			d = (((x % 10000) % 1000) % 100) / 10;
			e = (((x % 10000) % 1000) % 100) % 10;
			cout << "Tong cua cac chu so cua so do la: " << a + b + c + d + e << endl;
		}
}

//4) Viết chương trình nhập vào một số tiền VND và tỉ giá USD/VND. In ra số tiền USD đổi được.
void BT4() {
	int dong;
	double tigia;
	cout << "Nhap so tien VND can doi: "; cin >> dong;
	cout << "Nhap ti gia USD/VND: 1 USD = ? VND: "; cin >> tigia;
	cout << "So tien USD doi duoc: " << dong / tigia << endl;
}

//5) Viết chương trình nhập vào bán kính của một hình tròn. In ra chu vi và diện tích của hình tròn đó.
void BT5() {
	double R;
	cout << "Nhap ban kinh cua mot hinh tron: "; cin >> R;
	cout << "Chu vi cua hinh tron la: " << 2 * 3.14 * R << endl;
	cout << "Dien tich cua hinh tron la: " << 3.14 * R * R << endl;
}

//6) Viết chương trình nhập vào tọa độ của hai điểm A và B trong mặt phẳng. In ra khoảng cách của chúng.
void BT6() {
	double a, b, c, d;
	cout << "Nhap toa do (x, y) cua A: "; cin >> a >> b;
	cout << "Nhap toa do (x, y) cua B: "; cin >> c >> d;
	cout << "Khoang cach giua 2 diem A, B la: " << sqrt((c - a) * (c - a) + (d - b) * (d - b));
}
int main() {
	int n;
	cout << "Nhap bai tap: ";
	cin >> n;
	switch (n) {
	case 1: BT1(); break;
	case 2: BT2(); break;
	case 3: BT3(); break;
	case 4: BT4(); break;
	case 5: BT5(); break;
	case 6: BT6(); break;
	}
	return 0;
}
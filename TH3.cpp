#include <iostream>
#include <cmath>
#include <iomanip>
#include <bitset>

using namespace std;

/* 1) Viết chương trình nhập vào độ dài 3 cạnh a, b, c. Cho biết:
- có tạo thành tam giác hay không?
- nếu có thì tam giác đó là tam giác gì? (thường, cân, vuông, vuông cân, đều)*/
void BT1() {
	double a, b, c;
	cout << "Nhap 3 canh cua tam giac: "; cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b) {
		cout << "3 canh tren tao thanh tam giac" << endl;
		if (a* a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
			if (a == b || b == c || c == a) {
				cout << "Do la tam giac vuong can";
			}
			else {
				cout << "Do la tam giac vuong";
			}
		}
		else if (a == b && b == c) {
			cout << "Do la tam giac deu";
		} 
		else if (a == b || b == c || c == a) {
			cout << "Do la tam giac can";
		}
		else {
			cout << "Do la tam giac thuong";
		}
	}
	else {
		cout << "3 canh tren khong tao thanh tam giac";
	}
}

//2) Viết chương trình nhập vào một số nguyên dương, cho biết số đó có phải là số chính phương hay không?
void BT2() {
	int a, x;
	cout << "Nhap so nguyen duong: "; cin >> a;
	x = sqrt(a);
	if (x * x == a) {
		cout << a << " la so chinh phuong";
	}
	else {
		cout << a << " khong la so chinh phuong";
	}
}

//3) Viết chương trình nhập vào một tháng, cho biết đang ở quý mấy.
void BT3() {
	int x;
	cout << "Nhap vao 1 thang: "; cin >> x;
	if (x >= 10){
		cout << "Dang o quy 4";
	}
	else if (x >= 7) {
		cout << "Dang o quy 3";
	}
	else if (x >= 4) {
		cout << "Dang o quy 2";
	}
	else {
		cout << "Dang o quy 1";
	}
}

/* 4) Viết chương trình nhập vào một ngày gồm ngày, tháng và năm.cho biết có phải là ngày hợp lệ không ?
 Biết năm nhuận là năm chia hết cho 4 và nếu nó chia hết cho 100 thì cũng phải chia hết cho 400.*/
void BT4() {
	int ngay, thang, nam;
	cout << "Nhap ngay: "; cin >> ngay;
	cout << "Nhap thang: "; cin >> thang;
	cout << "Nhap nam: "; cin >> nam;
	switch (thang) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (ngay < 32 && ngay > 0) {
			cout << "Ngay " << ngay << "/" << thang << "/" << nam << " hop le" << endl;
		}
		else {
			cout << "Ngay " << ngay << "/" << thang << "/" << nam << " khong hop le" << endl;
		}
		break;
	case 4: case 6: case 9: case 11:
		if (ngay < 31 && ngay > 0) {
			cout << "Ngay " << ngay << "/" << thang << "/" << nam << " hop le" << endl;
		}
		else {
			cout << "Ngay " << ngay << "/" << thang << "/" << nam << " khong hop le" << endl;
		}
		break;
	case 2:
		if (nam % 4 == 0) {
			if (nam % 100 == 0) {
				if (nam % 400 == 0) {
					if (ngay < 30 && ngay > 0) {
						cout << "Ngay " << ngay << "/" << thang << "/" << nam << " hop le" << endl;
					}
					else {
						cout << "Ngay " << ngay << "/" << thang << "/" << nam << " khong hop le" << endl;
					}
				}
				else {
					if (ngay < 29 && ngay > 0) {
						cout << "Ngay " << ngay << "/" << thang << "/" << nam << " hop le" << endl;
					}
					else {
						cout << "Ngay " << ngay << "/" << thang << "/" << nam << " khong hop le" << endl;
					}
				}
			}
			else {
				if (ngay < 30 && ngay > 0) {
					cout << "Ngay " << ngay << "/" << thang << "/" << nam << " hop le" << endl;
				}
				else {
					cout << "Ngay " << ngay << "/" << thang << "/" << nam << " khong hop le" << endl;
				}
			}
		}
		else {
			if (ngay < 29 && ngay > 0) {
				cout << "Ngay " << ngay << "/" << thang << "/" << nam << " hop le" << endl;
			}
			else {
				cout << "Ngay " << ngay << "/" << thang << "/" << nam << " khong hop le" << endl;
			}
		}
	}
}

//5) Viết chương trình nhập vào hai số a và b. In ra kết quả phép chia a/b với 4 chữ số thập phân.
void BT5() {
	double a, b;
	cout << "Nhap a = "; cin >> a;
	cout << "Nhap b = "; cin >> b;
	cout << "a/b = " << setprecision(4) << fixed << a / b;
}

/*6)Viết chương trình nhập vào tọa độ của 2 điểm A và B trong mặt phẳng và in ra độ dài cạnh AB với định dạng bên dưới. 
Biết độ chính xác tính toán là 2 chữ số thập phân. Dùng các hằng fixed, left (canh trái chuỗi), right (canh phải chuỗi) 
và các hàm setw(n) đặt độ rộng của kết quả xuất, setprecision(n) đặt số chữ số phần thập phân.
Diem        x       y
A        2.33    1.21
B        1.30    1.01
Do dai AB = 1.05
*/
void BT6() {
	double m, n, u, v;
	cout << "Nhap toa do diem A" << endl;
	cout << "X = "; cin >> m;
	cout << "Y = "; cin >> n;
	cout << "Nhap toa do diem B" << endl;
	cout << "X = "; cin >> u;
	cout << "Y = "; cin >> v;
	cout << endl;
	cout << setw(5) << left << "Diem";
	cout << setw(8) << right << "x";
	cout << setw(8) << right << "y" << endl;
	cout << setw(5) << left << "A";
	cout << setw(8) << right << setprecision(2) << fixed << m;
	cout << setw(8) << right << setprecision(2) << fixed << n <<endl;
	cout << setw(5) << left << "B";
	cout << setw(8) << right << setprecision(2) << fixed << u;
	cout << setw(8) << right << setprecision(2) << fixed << v << endl;
	cout << "Do dai AB = " << sqrt((u - m) * (u - m) + (v - n) * (v - n));
}

/* 7) Viết chương trình nhập vào một số nguyên có giá trị từ 0 đến 255. In ra dãy bit của số đó.
Biết số từ 0 đến 255 được chứa trong 8 bit.
Dùng các phép toán dịch trái và dịch phải trên bit để tính toán. */
void BT7() {
	int a;
	cout << "Nhap vao so a = "; cin >> a;
	cout << "Day bit cua " << a << " la " << bitset<8>(a) << endl;
}

int main() {
	int n;
	cout << "Nhap bai tap: "; cin >> n;
	switch (n) {
	case 1: BT1(); break;
	case 2: BT2(); break;
	case 3: BT3(); break;
	case 4: BT4(); break;
	case 5: BT5(); break;
	case 6: BT6(); break;
	case 7: BT7(); break;
	}
	return 0;
}
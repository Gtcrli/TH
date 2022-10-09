#include <iostream>
#include <cmath>
using namespace std;

//1) Thiết kế và cài đặt hàm giải phương trình bậc hai để nhận 3 số a, b, c và trả kết quả là hai nghiệm x1, x2 nếu có nghiệm.
void bac_2(int a, int b, int c, double &n1, double &n2) {
	double denta = b * b - 4 * a * c;
	if (denta < 0) cout << "Phuong trinh vo nghiem";
	else if (denta == 0) cout << "Phuong trinh co nghiem kep x1 = x2 = " << -double(b) / (2 * a);
	else  n1 = (-double(b) + sqrt(denta)) / (2 * a), n2 = (-double(b) - sqrt(denta)) / (2 * a);
}

void BT1() {
	cout << "Giai phuong trinh bac 2: ax^2 + bx + c = 0 " << endl;
	int a, b, c;
	double n1 = 0, n2 = 0;
	cout << "Nhap so nguyen a: "; cin >> a;
	cout << "Nhap so nguyen b: "; cin >> b;
	cout << "Nhap so nguyen c: "; cin >> c;
	if (a == 0 && b == 0) cout << "Phuong trinh vo nghiem" << endl;
	else if (a == 0) cout << "Phuong trinh co nghiem x = " << -double(c) / b;
	else {
		bac_2(a, b, c, n1, n2);
		cout << "Phuong trinh co 2 nghiem phan biet x1 = " << n1 << ", x2 = " << n2;
	}
}

/*2) Viết hàm nhận vào tọa độ của hai điểm trên mặt phẳng gồm x1, y1, x2, y2 
và trả về khoảng cách giữa hai điểm đó. */

double toa_do(double x1, double x2, double y1, double y2) {
	return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

void BT2() {
	double x1, x2, y1, y2;
	cout << "Nhap toa do diem 1 " << endl;
	cout << "X1 = "; cin >> x1;
	cout << "Y1 = "; cin >> y1;
	cout << "Nhap toa do diem 2 " << endl;
	cout << "X2 = "; cin >> x2;
	cout << "Y2 = "; cin >> y2;
	cout <<"Khoang cach giua 2 diem tren mat phang la " << toa_do(x1, x2, y1, y2);
}
/*3) Viết hàm nhập một số nguyên dương, nếu là số lẻ thì có giá trị trong khoảng 100 đến 200, 
nếu là số chẵn thì tùy ý.*/
int nhap_so(int &n) {
	while ((n%2!=0) && (n < 100 || n>200)) {
			cout << "Neu la so le nhap tu 100 den 200 "; cin >> n;
		}
	return n;
}
void BT3() {
	int n;
	cout << "Nhap so nguyen n "; cin >> n;
	cout << nhap_so(n);

}


//4) Viết hàm trả về giá trị tổng các chữ số chẵn trong một số nguyên dương x.
int tong_chu_so_chan(int x, int &tam) {
	do {
		int a;
		a = x % 10;
		if (a % 2 == 0) {
			tam += a;
		}
		x = x / 10;
	} while (x > 0);
	return tam;
}
void BT4() {
	int x, tam = 0;
	cout << "Nhap x: "; cin >>x;
	tong_chu_so_chan(x, tam);
	cout << "Tong cac chu so chan cua so nguyen duong x la " << tam;
}

//5) Viết hàm in ra màn hình n dấu *. 
void _in(int n) {
	for (int i = 0; i < n; i++) {
		cout << "*";
	}
}
void BT5() {
	int n;
	cout << "Nhap so * can in "; cin >> n;
	_in(n);
}

//7) Viết hàm tính thể tích hình khối chữ nhật với chiều dài a, chiều rộng b và chiều sâu c.
int thetich(int a, int b, int c) {
	return a * b * c;
}
void BT7() {
	int a, b, c;
	cout << "Nhap chieu dai a = "; cin >> a;
	cout << "Nhap chieu dai b = "; cin >> b;
	cout << "Nhap chieu dai c = "; cin >> c;
	cout << "the tich hinh khoi chu nhat la " << thetich(a, b, c);;
}

/*8) Viết kiểm tra tam giác có tọa độ 3 đỉnh là x1, y1, x2, y2, x3, y3 
là tam giác thường, cân, vuông, vuông cân hay đều.*/
double toa_do_1(double a, double b, double c, double d) {
	return sqrt((c - a) * (c - a) + (d - b) * (d - b));
}

void kt_tam_giac(double a, double b, double c) {
	if (a + b > c && b + c > a && a + c > b) {
		cout << "3 canh tren tao thanh tam giac" << endl;
		if (a  == sqrt(b * b + c * c) || b  == sqrt (a * a + c * c) || c == sqrt(a * a + b * b)) {
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
void BT8() {
	double x1, x2, y1, y2, x3, y3;
	cout << "Nhap toa do diem 1 " << endl;
	cout << "X1 = "; cin >> x1;
	cout << "Y1 = "; cin >> y1;
	cout << "Nhap toa do diem 2 " << endl;
	cout << "X2 = "; cin >> x2;
	cout << "Y2 = "; cin >> y2;
	cout << "Nhap toa do diem 3 " << endl;
	cout << "X3 = "; cin >> x3;
	cout << "Y3 = "; cin >> y3;
	kt_tam_giac(toa_do_1(x1, y1, x2, y2), toa_do_1(x1, y1, x3, y3), toa_do_1(x2, y2, x3, y3));
}

//9) Viết hàm tính bội số chung nhỏ nhất của hai số a và b.
int boi_so(int &a, int b) {
	for (int i = a; i <= a * b; i++) {
		if (i % a == 0 && i % b == 0) {
			a = i;
			break;
		}
	}
	return a;
}

void BT9() {
	int a, b;
	cout << "Nhap so nguyen duong a: "; cin >> a;
	cout << "Nhap so nguyen duong b: "; cin >> b;
	cout << "BCNN cua a va b la " << boi_so(a, b);
}

//10) Viết hàm tính giá trị của đa thức bậc 2 với các hệ số a, b, c tại điểm x
double gia_tri(int a, int b, int c, double x) {
	return (a * x * x + b * x + c);
}
void BT10() {
	cout << "A = ax^2 + bx + c " << endl;
	int a, b, c, x;
	cout << "Nhap so nguyen a: "; cin >> a;
	cout << "Nhap so nguyen b: "; cin >> b;
	cout << "Nhap so nguyen c: "; cin >> c;
	cout << "Gia tri A = " << a << "x^2 + " << b << "x + " << c << " = 0 tai x = "; cin >> x;
	cout << "A = " << gia_tri(a, b, c, x);
}

int main() {
	int n;
	cout << "Nhap bai tap "; cin >> n;
	switch (n) {
	case 1: BT1(); break;
	case 2: BT2(); break;
	case 3: BT3(); break;
	case 4: BT4(); break;
	case 5: BT5(); break;
	case 7: BT7(); break;
	case 8: BT8(); break;
	case 9: BT9(); break;
	case 10: BT10(); break;
	}
	return 0;
}


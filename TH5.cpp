#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/* 1) Nhập vào một số nguyên dương n không quá 100 và kiểm tra điều kiện nhập cho đến người n được nhập đúng. 
Tính tổng dãy sau và in ra màn hình giá trị tổng dãy 2*12+3*22+4*32+...+(n+1)*n2	*/
void BT1() {
	int n, tam, tong = 0;
	cout << "Nhap so nguyen duong n khong qua 100: "; cin >> n;
	while (n > 100 || n < 0) {
		cout << "Nhap sai, nhap lai n: "; cin >> n;
	}
	for (int i = 1; i <= n; i++) {
		tam = (i + 1) * (10 * i + 2);
		tong += tam;
	}
	cout << "Tong day~ la: " << tong << endl;
}

//2) Viết chương trình nhập vào một số nguyên dương n và tính tổng các số chính phương nhỏ hơn n
void BT2() {
	int n, x = 0, tong = 0;
	cout << "Nhap so nguyen duong n: "; cin >> n;
	for (double i = 1; i < n; i++) {
		x = sqrt(i);
		if (x * x == i) {
			tong += i;
		}
	}
	cout << "Tong cac so chinh phuong nho hon n: " << tong << endl;
}

/*3) Viết chương trình nhập vào một số n, sau đó cho phép nhập n số nguyên. 
Sau khi nhập xong in ra tổng căn bậc hai của các số vừa nhập với số chữ số thập phân là 4. */
void BT3() {
	int n, a;
	double tong = 0;
	cout << "Nhap so n: "; cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << "Nhap so thu " << i << ": "; cin >> a;
		tong += sqrt(a);
	}
	cout << "Tong can bac hai cua ca so vua nhap la " << setprecision(4) << fixed << tong << endl;
}

//4) Viết chương trình in ra bảng cửu chương.
void BT4() {
	cout << "Bang cuu chuong" << endl;
	for (int i = 1; i < 11; i++) {
		for (int j = 2; j < 10; j++) {
			cout <<  j << " * " << setw(2) << i << " = " << setw(2) << i*j << "   ";
		}
		cout << endl;
	}
}

/*5) Viết chương trình nhập vào một số nguyên dương n. Sau đó cho phép nhập n số nguyên (dương hoặc âm). 
Sau khi nhập xong in ra tổng các số nguyên dương và tổng số nguyên âm. */
void BT5() {
	int n, a;
	double tong1 = 0, tong2 = 0;
	cout << "Nhap so n: "; cin >> n;
	for (int i = 1; i <= n; i++) {
		cout << "Nhap so thu " << i << ": "; cin >> a;
		if (a > 0) {
			tong1 += a;
		}
		else {
			tong2 += a;
		}
	}
	cout << "Tong cac so nguyen duong: " << tong1 << endl;
	cout << "Tong cac so nguyen am: " << tong2 << endl;
}

/*6) Viết chương trình nhập vào một số nguyên duong n. 
Tìm hai số chính phương khác nhau có tổng gần với n nhất mà không lớn hơn n. */
void BT6() {
	int n, x = 0, tong = 0;
	cout << "Nhap so nguyen duong n: "; cin >> n;
	for (int i = n - 1; i > 0; i--) {
		x = sqrt(i);
		if (x * x == i) {
			tong += i;
			if (tong > i) {
				if (tong > n) {
					tong -= i;
				}
				else {
					x = i;
					break;
				}
			}
		}
	}
	cout << "hai so chinh phuong la " << tong - x << " va " << x << endl;
}

//7) Viết chương trình nhập vào hai số nguyên dương m và n và in ra bội số chung nhỏ nhất của chúng.
void BT7() {
	int m, n, i = 1;
	cout << "Nhap m: "; cin >> m;
	cout << "Nhap n: "; cin >> n;
	while (i % m != 0 || i % n != 0) {
		i++;
	}
	cout << "Boi so chung nho nhat cua chung la " << i << endl;
}

//8) Viết chương trình nhập vào hai phân số, tính tổng của chúng và in phân số tổng dưới dạng tối giản.
void BT8() {
	int m, n, i = 1, a, b;
	cout << "Nhap phan so thu nhat " << endl;
	cout << "Tu so : "; cin >> a;
	cout << "Mau so : "; cin >> m;
	cout << "Nhap phan so thu hai " << endl;
	cout << "Tu so : "; cin >> b;
	cout << "Mau so : "; cin >> n;
	while (m == 0 || n == 0) {
		cout << "Nhap sai phan so " << endl;
		cout << "Nhap lai phan so thu nhat " << endl;
		cout << "Tu so : "; cin >> a;
		cout << "Mau so : "; cin >> m;
		cout << "Nhap lai phan so thu hai " << endl;
		cout << "Tu so : "; cin >> b;
		cout << "Mau so : "; cin >> n;
	}
	while (i % m != 0 || i % n != 0) {
		i++;
	}
	cout << "Phan so tong : " << (i / m) * a + (i / n) * b << "/" << i << endl;
}

/*9) Viết chương trình nhập vào một số n và tọa độ của một điểm. Sau đó nhập tọa độ của n điểm. 
In ra tọa độ của điểm có khoảng cách tới điểm ban đầu ngắn nhất. */
void BT9() {
	int n;
	double a, b, x, y, xmin = 0, ymin = 0, tam = 0, tam1 = 0;
	cout << "Nhap so n: "; cin >> n;
	cout << "Diem ban dau" << endl;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	for (int i = 1; i <= n; i++) {
		cout << "Diem " << i << endl;
		cout << "x = "; cin >> a;
		cout << "y = "; cin >> b;
		tam = sqrt((a - x) * (a - x) + (b - y) * (b - y));
		do  {
			tam1 = tam;
			xmin = a;
			ymin = b;
		} while (tam < tam1);
	}
	cout << "Diem co khoang cach ngan nhat (" << xmin << "," << ymin << ")" << endl;
}

/* 10) Viết chương trình hiện ra một menu các chương trình cần chạy của câu 1 đến 9 và một một mục Thoát. Cho phép nhập vào số hiệu của chương trình. Sau đó thực hiện chương trình vừa được chọn. 
Sau khi chạy xong thì tiếp tục cho phép chọn chương trình đến khi nào người sử dụng chọn Thoát. */
int main() {
	int n;
	do {
		cout << endl;
		cout << "1 - Cau 1 - Tong day." << endl;
		cout << "2 - Cau 2 - So chinh phuong." << endl;
		cout << "3 - Cau 3 - Tong can bac hai." << endl;
		cout << "4 - Cau 4 - Bang cuu chuong." << endl;
		cout << "5 - Cau 5 - Tong so am, duong." << endl;
		cout << "6 - Cau 6 - Hai so chinh phuong." << endl;
		cout << "7 - Cau 7 - Boi so chung." << endl;
		cout << "8 - Cau 8 - Tong phan so." << endl;
		cout << "9 - Cau 9 - Diem gan nhat." << endl;
		cout << "10 - Thoat." << endl;
		cout << "Chon chuong trinh de chay: "; cin >> n;
		cout << endl;
		switch (n) {
		case 1: BT1(); break;
		case 2: BT2(); break;
		case 3: BT3(); break;
		case 4: BT4(); break;
		case 5: BT5(); break;
		case 6: BT6(); break;
		case 7: BT7(); break;
		case 8: BT8(); break;
		case 9: BT9(); break;
		default: continue;
		}
	} while ( n != 10 );
}
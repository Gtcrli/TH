#include <iostream> 

using namespace std;

/* 1) Không dùng hàm sqrt, viết chương trình nhập vào một số và in ra giá trị căn bậc hai
của nó với sai số không quá 0.0001 */
void BT1() {
	double n, i = 1;
	cout << "Nhap so n: "; cin >> n;
	do {
		i = (n / i - i) / 2 + i;
	} while (abs(n - i * i) > 0.0001);
	cout << "Can bac hai cua n voi sai so khong qua 0.0001 la: " << i;
}

//2) Viết chương trình nhập vào một số n và in ra màn hình hình vuông đặc có cạnh là n dấu *
void BT2() {
	int n;
	cout << "Nhap so n: "; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << "*" <<" ";
		}
		cout << endl;
	}
}

/*3) Viết chương trình nhập vào một số n và in ra màn hình hình tam giác vuông cân 
có độ dài cạnh góc vuông là n dấu *. Biết hai cạnh góc vuông nằm ngang và nằm dọc.*/
void BT3() {
	int n;
	cout << "Nhap so n: "; cin >> n;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j <= i; j++) {
			cout << "*" << " ";
		}
		cout << endl;
	}
}

//4) Viết chương trình nhập vào một số nguyên dương không quá 10 chữ số và tính tổng các chữ số chẵn của nó.
void BT4() {
	int n, sum = 0, a;
	cout << "Nhap n: "; cin >> n;
	do { 
		a = n % 10;
		if (a % 2 == 0) {
			sum += a;
		}
		n /= 10;
	} while (n > 0);
	cout << "Tong cac chu so chan la " << sum;
}

//6) Viết chương trình nhập vào một số n và tìm tất cả số nguyên tố nhỏ hơn n.
void BT6() {
	int n, a = 2;
	cout << "Nhap n "; cin >> n;
	while (a < n) {
		for (int i = 2; i <= a; i++) {
			if (a == i) {
				cout << a << " ";
			}
			else if (a % i == 0) {
				break;
			}
		}
		a++;
	}
}

//7) Viết chương trình nhập vào hai số a và b và in ra ước số chung lớn nhất của nó.
void BT7() {
	int a, b, max = 1, i = 1;
	cout << "Nhap a: "; cin >> a;
	cout << "Nhap b: "; cin >> b;
	while (i <= abs(a) || i <= abs(b)) {
		if (a % i == 0 && b % i == 0) {
			max = i;
		}
		i++;
	}
	cout << "Uoc chung lon nhat cua a va b la " << max;
}

//8) Viết chương trình nhập vào tử số và mẫu số của một phân số và in ra phân số tối giản.
void BT8() {
	int a, b, max = 1, i = 1;
	cout << "Nhap tu so: "; cin >> a;
	cout << "Nhap mau so: "; cin >> b;
	if (b == 0) {
		cout << "Phan so khong ton tai ";
	}
	else {
		while (i <= abs(a) || i <= abs(b)) {
			if (a % i == 0 && b % i == 0) {
				max = i;
			}
			i++;
		}
		if (b / max < 0) {
			cout << "Phan so toi gian la " << (a / max) / -1 << "/" << abs(b / max);
		}
		else {
			cout << "Phan so toi gian la " << a / max << "/" << b / max;
		}
	}
}

/*9) viết chương trình nhập vào một số tiền là một con số nguyên 0<x<100, 
in ra số tờ của mỗi loại tiền có mệnh giá là 1, 2, 5, 10 để có giá trị bằng x. */
void BT9() {
	int n, a;
	cout << "Nhap vao mot so tien la mot con so nguyen 0<x<100: "; cin >> n;
	a = n / 10;
	cout << "So to menh gia 10: " << a << endl;
	a = n % 10;
	n = a / 5;
	cout << "So to menh gia 5: " << n << endl;
	n = a % 5;
	a = n / 2;
	cout << "So to menh gia 2: " << a << endl;
	a = n % 2;
	cout << "So to menh gia 1: " << a << endl;
}

/*10) Viết chương trình nhập vào một số nguyên dương không quá 10 chữ số và chữ số tận cùng khác 0.
In ra số nguyên đảo ngược của nó */
void BT10() {
	int n, a;
	cout << "Nhap so nguyen duong khong qua 10 chu so: "; cin >> n;
	do {
		a = n % 10;
		cout << a;
		n /= 10;
	} while (n > 0);
}

int main() {
	int n;
	cout << "Nhap bai tap: "; cin >> n;
	switch (n) {
	case 1: BT1(); break;
	case 2: BT2(); break;	
	case 3: BT3(); break;
	case 4: BT4(); break;
	case 6: BT6(); break;
	case 7: BT7(); break;
	case 8: BT8(); break;
	case 9: BT9(); break;
	case 10: BT10(); break;
	}
	return 0;
}
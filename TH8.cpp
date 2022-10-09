#include <iostream>

using namespace std;

/*1. Viết chương trình Tính số hạng thứ n của dãy Fibonaci.Biết rằng :
f(0) = f(1) = 1
f(n) = f(n – 1) + f(n – 2)*/
int fibonaci(int n) {
	if (n == 1 || n == 0) return 1;
	return fibonaci(n - 1) + fibonaci(n - 2);
}

void BT1() {
	int n;
	cout << "Nhap so hang thu n cua day Fibonaci can tim "; cin >> n;
	cout << fibonaci(n);
}
//2. Tính giá trị biểu thức: S = 1 + 1*2 + 1*2*3... + 1*2*...*n
int giai_thua(int n) {
	if (n == 1) return 1;
	return (n * giai_thua(n - 1));
}

void BT2() {
	int n, S = 0;
	cout << "Tinh tong day S = 1 + 1*2 + 1*2*3... + 1*2*...*n" << endl;
	cout << "Nhap n "; cin >> n;
	for (int i = 1; i <= n; i++) {
		S += giai_thua(i);
	}
	cout << "S = " << S;
}

/* 3. Viết chương trình tìm ước số chung lớn nhất của 2 số nguyên dương x và y bằng
kỹ thuật đệ quy.
USCLN (x, y) = x nếu x=y
USCLN (x, y) = USCLN (x‐y, y) nếu x>y
USCLN (x, y) = USCLN (x, y‐ x) nếu x<y */
int USCLN(int x, int y) {
	if (x > y) return USCLN(x - y, y);
	if (x < y) return USCLN(x, y - x);
	return x;
}

void BT3() {
	int x, y;
	cout << "Nhap x "; cin >> x;
	cout << "Nhap y "; cin >> y;
	cout <<"Uoc so chung lon nhat cua x va y la " << USCLN(x, y);
}

/*4. Viết hàm tính C (n, k) biết rằng :
C (n, k) = 1 nếu k=0 hoặc k=n
C (n, k) = 0 nếu k>n
C (n, k) = C(n‐1, k) + C(n‐1, k‐1) nếu 0<k<n */
int C(int n, int k) {
	if (k == 0 || k == n) return 1;
	if (k > n) return 0;
	return C(n - 1, k) + C(n - 1, k - 1);
}

void BT4() {
	int n, k;
	cout << "Tinh C(n, k)" << endl;
	cout << "Nhap n "; cin >> n;
	cout << "Nhap k "; cin >> k;
	cout << "C(n, k) = " << C(n, k);
}



int main() {
	int n;
	cout << "Nhap bai tap "; cin >> n;
	switch (n) {
	case 1: BT1(); break;
	case 2: BT2(); break;
	case 3: BT3(); break;
	case 4: BT4(); break;
	}
}
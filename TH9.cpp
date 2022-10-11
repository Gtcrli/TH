#include <iostream>

using namespace std;

//1. Xuất các số nguyên tố có trong mảng số nguyên ra màn hình. 
void nguyen_to(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i << " : "; cin >> a[i];
	}
	cout << "Cac so nguyen to la ";
	for (int i = 0; i < n; i++) {
		int tam = 0;
		if (a[i] == 0 || a[i] == 1) tam++;
		for (int j = 2; j < a[i]; j++) {
			if (a[i] % j == 0) tam++;
		}
		if (tam == 0) cout << a[i] << " ";
	}
}
void BT1() {
	int n, a[100];
	cout << "Nhap so phan tu cua mang "; cin >> n;
	nguyen_to(a, n);
}
//2. Kiểm tra mảng có đối xứng hay không ?
void doi_xung(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i << " : "; cin >> a[i];
	}
	int t = 0;
	for (int i = 0; i < n / 2; i++) {
		if (a[i] != a[n - 1 - i]) {
			t++;
			break;
		}
	}
	if (t == 1) cout << "Mang khong doi xung";
	else cout << "Mang doi xung";

}
void BT2() {
	int n, a[100];
	cout << "Nhap so phan tu cua mang "; cin >> n;
	doi_xung(a, n);
}
/* 3. Viết hàm xóa phần tử có chỉ số k trong mảng số nguyên a có n phần tử. 
Nếu giá trị của k < 0 hoặc k >= n thì không xóa và hàm trả về giá trị 0.
Ngược lại ta xóa giá trị phần tử a[k] và hàm trả về giá trị 1. */
int xoa(int a[], int& n, int k) {
	if (k < 0 || k >= n) return 0;
	else {
		for (int i = k; i < n - 1; i++) {
			a[i] = a[i + 1];
		}
		n--;
		return 1;
	}

}

void BT3() {
	int n, a[100], k;
	cout << "Nhap so phan tu cua mang "; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i << " : "; cin >> a[i];
	}
	cout << endl << "Nhap phan tu thu k can xoa "; cin >> k;
}

//4. Tìm vị trí phần tử lớn nhất trong mảng.
void max(int a[], int n) {
	int max = a[0];
	for (int i = 0; i < n; i++) {
		if (a[i] > max) {
			max = a[i];
		}
	}
	cout << "Vi tri cua phan tu lon nhat trong mang ";
	for (int i = 0; i < n; i++) {
		if (max == a[i]) cout << i << " ";
	}
}

void BT4() {
	int n, a[100];
	cout << "Nhap so phan tu cua mang "; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i << " : "; cin >> a[i];
	}
	max(a, n);
}


//5. Tìm vị trí của phần tử có giá trị âm lớn nhất trong mảng số nguyên .
void am(int a[], int n) {
	int max = 0;
	for (int i = 0; i < n; i++) {
		if (a[i] < 0 && abs(a[i])> max) {
			max = a[i];
		}
	}
	if (max == 0) cout << "Day khong co so am";
	else cout << "Vi tri cua phan tu co gia tri am lon nhat trong mang so nguyen la ";
	for (int i = 0; i < n; i++) {
		if (max == a[i] && max != 0)cout << i << " ";
	}
}

void BT5() {
	int n, a[100];
	cout << "Nhap so phan tu cua mang "; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "Nhap phan tu thu " << i << " : "; cin >> a[i];
	}
	am(a, n);
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
	}
}
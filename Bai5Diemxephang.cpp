#include<iostream>
using namespace std;
int main()
{
	cout << "Chuong Trinh Xep Hang Tu Diem\n";
	double diem;
	cout << "Nhap Diem:"; cin >> diem;
	if (diem <= 5) {
		cout << "Yeu";
	}
	else if (diem <= 6) {
		cout << "TB";
	}
	else if (diem < 8) {
		cout << "kha";
	}
	else {
		cout << "gioi";
	}

	return 0;
}
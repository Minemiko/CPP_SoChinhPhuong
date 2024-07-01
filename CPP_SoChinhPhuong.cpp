#include <iostream> <cmath>
using namespace std;

bool checkSCP(int so) {
	if ((int)sqrt(so) == sqrt(so)) return true; return false;
}

int main() {
	int so;
	cout << "Nhap so: ";
	cin >> so;
	cout << "Cac chinh phuong la:";
	for (int i = 1; i <= so; i++) {
		if (checkSCP(i)) cout << i << " ";
	}
}
#include<iostream>
using namespace std;
int main() {
	int a, b,i;
	cin >> a >> b;
	if (a > b) {
		i = b;
		while (a % i != 0 && b % i != 0)
			i--;
	}
	else {
		i = a;
		while (a % i != 0 && b % i != 0)
			i--;

	}
	cout << "���Լ��" << i;
	int c = a * b / i;
	cout << "��С������" << c;
}
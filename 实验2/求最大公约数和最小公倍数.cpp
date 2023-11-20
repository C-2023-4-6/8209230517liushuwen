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
	cout << "最大公约数" << i;
	int c = a * b / i;
	cout << "最小公倍数" << c;
}
#include<iostream>
using namespace std;
int main() {
	float a, b, c;
	cin >> a;
	b = a;
	c = (b + a / b) / 2;
	while ((c - b) > -5 && (c - b) < 5)
	{
		b = c;
		c = (b + a / b) / 2;
	}
	cout << c;
	return 0;
}
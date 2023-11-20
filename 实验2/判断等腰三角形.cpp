#include<iostream>
using namespace std;
int main() {
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b)
		if (a == b || a == c || b == c)
			cout << "该三角形是等腰三角形";
		else
			cout << "该三角形不是等腰三角形";
	else
		cout << "这不是三角形";
}
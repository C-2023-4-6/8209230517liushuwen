#include<iostream>
using namespace std;
int main() {
	float a, b, c;
	cin >> a >> b >> c;
	if (a + b > c && b + c > a && a + c > b)
		if (a == b || a == c || b == c)
			cout << "���������ǵ���������";
		else
			cout << "�������β��ǵ���������";
	else
		cout << "�ⲻ��������";
}
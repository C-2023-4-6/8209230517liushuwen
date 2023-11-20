#include<iostream>
using namespace std;
int main() {
	float f;
	cout << "输入华氏温度" << endl;
	cin >> f;
	float c = (f - 32) * 5 / 9;
	cout << "摄氏温度为" << c;
}
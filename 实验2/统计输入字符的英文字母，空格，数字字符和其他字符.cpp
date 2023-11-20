#include<iostream>
using namespace std;
int main() {
	int letter = 0, space = 0, number = 0, other = 0;
	char c;
	cout << "输入文本";
	while ((c = getchar()) != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letter++;
		else if (c >= '0' && c <= '9')
			number++;
		else if (c == ' ')
			space++;
		else other++;
	}
	cout << "字母" << letter << "空格" << space << "数字" << number << "其他" << other;
	return 0;
}
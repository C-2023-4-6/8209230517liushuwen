#include<iostream>
using namespace std;
int main() {
	int letter = 0, space = 0, number = 0, other = 0;
	char c;
	cout << "�����ı�";
	while ((c = getchar()) != '\n') {
		if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			letter++;
		else if (c >= '0' && c <= '9')
			number++;
		else if (c == ' ')
			space++;
		else other++;
	}
	cout << "��ĸ" << letter << "�ո�" << space << "����" << number << "����" << other;
	return 0;
}
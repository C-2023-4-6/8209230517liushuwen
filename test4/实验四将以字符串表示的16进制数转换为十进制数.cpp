#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int parseHex(const char* const hexString) {
	int a , sum = 0;
	a = strlen(hexString);
	
	for (int i = 0; i < a; i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
			sum += (10+(hexString[i]-'A')) * (pow(16, a - 1 - i));
		else
			sum += (hexString[i]-'0') * pow(16, a - i - 1);
		
	}
	return sum;
}
int main() {
	char s[999];
	cin.getline(s, 999);
	cout << parseHex(s);
}
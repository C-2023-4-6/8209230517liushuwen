#include<iostream>
using namespace std;
bool is_prime(int num) {
	if (num <= 1)
		return false;
	if (num > 1) {
		for (int i = 2; i < num; i++)
		{
			if ((num % i) == 0)
				return false;
		}
		return true;
	}
}
int main() {
	int n = 0; int i = 2;
	while (n <= 200) {
		if (is_prime(i) == true)
		{
			n++;
			cout << i << " ";
			if ((n % 10) == 0)
				cout << '\n';
		}
		i++;
	}
	return 0;
}
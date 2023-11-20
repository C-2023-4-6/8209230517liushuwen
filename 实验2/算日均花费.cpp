#include<iostream>
using namespace std;
int main() {
	int i = 2,d=1;
	float c = 0.8 * i;
	while (i <= 100) {
		i = 2 * i;
		c = c + 0.8 * i;
		d++;
	}
	float dailycost = c / d;
	cout << dailycost;

}
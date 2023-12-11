#include<iostream>
using namespace std;
int sum(int day,int n) {
	if (day > 0) {
		n = (n + 1) * 2;
		day--;
		return sum(day, n);
	}
	else
		return n;
}
int main() {
	cout<<sum(10, 1);
}
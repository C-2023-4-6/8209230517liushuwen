#include<iostream>
using namespace std;
int main() {
	int i = 1,a=1;
	while (i <= 5) {
		for (a = 1; a <= i; ++a) {
			cout << "*";
		}
		cout<<"\n";
		++i;
	}

}
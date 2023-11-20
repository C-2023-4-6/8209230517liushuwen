#include <iostream>
using namespace std;
int main() {
	char a;
	cin >> a;
	int b = islower(a);
	if (b != 0) {


		char c = toupper(a);
		cout << c;
	}
	else
		cout <<int( a);
             
}
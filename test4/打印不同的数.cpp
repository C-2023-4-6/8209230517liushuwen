#include<iostream>
using namespace std;
int main() {
	int a[10],b[10];
	for (int i = 0; i <= 9; i++) {
		cin >> a[i];
	}
	cout << a[0] << " ";
	int i = 1, j = 0; 
	for (int i = 1; i < 10; i++) {
		int key = a[i];
		bool isrepeat = false;
		for (int j = i; j >= 0; j--) {
			if (key == a[j - 1]) {
				isrepeat = 1;
				break;
			}
		}
		if (!isrepeat)
			cout << key;
	}
	cout << endl;
	return 0;
}
#include<iostream>
using namespace std;
void arrange(int p[], int size) {
	int temp;
	for(int n=0;n<size;n++)
		for(int m=0;m<size-1;m++)
			if (*(p + m) > *(p + m + 1)) {
				temp = *(p + m);
				*(p + m) = *(p + m + 1);
				*(p + m + 1) = temp;
			}
}
int main() {
	int size;
	
	cin >> size;
	int* p = new int[size];
	for (int i = 0; i < size; i++) {
		cin >>*( p + i);
	}
	arrange(p, size);
	for (int i = 0; i < size; i++) {
		cout << *(p + i) << " ";
	}
	delete p;
}
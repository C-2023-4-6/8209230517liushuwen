#include<iostream>
#include<cstring>
using namespace std;
int indexof(const char* s1,const char* s2) {
	if (s1[0] == 0)
		return 0;
	else {
		for (int i = 0; s2[i]; i++) {
			int k = i, j = 0;
			for (; s1[j]; ++k, ++j) {
				if (s2[k] != s1[j]) {
					break;
				}
			}
			if (s1[j] == 0) {
				return i;
			}
		}
		return -1;
	}
}
int main() {
	char s1[40];
	char s2[40];
	cin >> s1 >> s2;
	cout << indexof(s1, s2);
}
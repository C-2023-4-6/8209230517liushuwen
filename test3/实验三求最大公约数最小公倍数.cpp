#include<iostream>
using namespace std;
int abc(int m, int n) {
	
	int max;
	if (m >= n)
	{
		max = n;
		while ((m % max) != 0 || (n % max) != 0)
			max--;
		return max;
	}
	if (m < n)
	{
		max =m;
		while ((m % max) != 0 || (n % max) != 0)
			max--;
		return max;
	}
		    
}
int main() {
	int m,  n;
	cin >> m >> n;
	cout << "���Լ��"<<abc(m, n) << endl;
	cout << "��С������" << m * n / abc(m, n) << endl;
	return 0;
}
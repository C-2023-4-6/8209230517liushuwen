#include<iostream>
using namespace std;
class point {
private:
	int x, y;
public:
	point(int X, int Y) {
		x = X; y = Y;
	}
	void setpoint(int i, int j) {
		x = x + i; y = y + j;
	}
	void display() {
		cout << "(" << x << "," << y << ")" << endl;
	}

};
int main() {
	point p0(60,80);
	int i, j;
	cin >> i >> j;
	p0.setpoint(i, j);
	p0.display();
}
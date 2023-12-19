#include<iostream>
using namespace std;
class v {
public:
	float length;
	float width;
	float height;
	void set_changfangzhu(){
		cin >> length >> width >> height;
	}
	void displayv() {
		cout << "V=" << length * width * height << endl;
	}
};
int main() {
	v v1, v2, v3;
	v1.set_changfangzhu();
	v1.displayv();
	v2.set_changfangzhu();
	v2.displayv();
	v3.set_changfangzhu();
	v3.displayv();
}
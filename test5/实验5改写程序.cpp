#include<iostream>
using namespace std;
class Time {
private:
	int hour;
	int minute;
	int sec;
public:
	void settime(void) {

		cin >> hour;
		cin >> minute;
		cin >> sec;

	};
	void showtime(void) {
		cout << hour << ":" << minute << ":" << sec <<  endl;
	};
};
int main() {
	Time t1;
	t1.settime();
	t1.showtime();
}
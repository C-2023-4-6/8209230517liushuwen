#include<iostream>
using namespace std;
class student {
public:
	int num,grade;
	void set() {
		cin >> num >> grade;
	}
};
void max(student* sl) {
	int Max=sl->grade;
	int Num = sl->num;
	for (int i = 0; i < 5; i++) {
		if (((sl + i)->grade) > Max)
		{
			Max = (sl + i)->grade; Num = (sl + i)->num;
		}
	}
	cout << Num;

}
int main() {
	student stu1, stu2, stu3,stu4,stu5;
	stu1.set();
	stu2.set();
	stu3.set();
	stu4.set();
	stu5.set();
	student list[5] = { stu1,stu2,stu3,stu4,stu5 };
	student* sl = list;
	max(sl);
}
#include<iostream>
using namespace std;
int main() {
	float a, c,d;
	char b;
	cin >> a>>b>> c;
	switch (b) {
	    case '+':
			d = a + c;
			cout << d;
			break;
		case '-' :
			d = a - c;
			cout << d;
			break;
		case ' * ':
			d = a * c;
			cout << d;
			break;
		case ' / ' :
			if (c!=0)
				d = a / c;
			    cout << d;
			    break;
	}
	if (c  == int(c)&&a==int(a))
		if (b == '%')
	        d = int(a) % int(c);
			cout << d;
	return 0;
}
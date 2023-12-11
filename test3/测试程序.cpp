#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	double fahrenheit_to_cels(double fah);
	double celsius_to_fah(double cel);
	cout << "Celsius"<<" Fahrenheit  | Fahrenheit "<<"Celsius" << endl;
	cout << fixed << setprecision(1) << "40.0" <<"  " << celsius_to_fah(40.0) << "|" << "20.0" << "  " << fahrenheit_to_cels(20.0) << endl;
	cout << fixed << setprecision(1) << "39.0" << "  " << celsius_to_fah(39.0) << "|" << "10.0" << "  "  << fahrenheit_to_cels(10.0) << endl;
	cout << fixed << setprecision(1) << "31.0" << "  " << celsius_to_fah(31.0) << "|" << "30.0" << "  "  << fahrenheit_to_cels(30.0) << endl;
}
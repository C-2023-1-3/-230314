#include<iostream>
using namespace std;


double celsius_to_fah(double cel)
{
	double fah;
	fah = cel * 9 / 5 + 32;
	cout<< fah << endl;
	return 0;
}
double fahrenheit_to_cels(double fah)
{
	double cel;
	cel = (fah - 32) * 5 / 9;
	cout << cel << endl;
	return 0;
}









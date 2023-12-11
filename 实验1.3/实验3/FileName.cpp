#include<iostream>
#include"mytemperature.h"
using namespace std;
int main() {
	int zhi=40,zhi2=120;
cout << "Celsius" << "Fahrenheit" << endl;
	for (int i = 0;i < 10;i++) {
		celsius_to_fah(zhi);
		zhi--;
	}
	cout <<  "Fahrenheit"<<"Celsius"  << endl;
	for (int i = 0;i < 10;i++) {
		fahrenheit_to_cels(zhi2);
		zhi2 -= 10;
	}
}










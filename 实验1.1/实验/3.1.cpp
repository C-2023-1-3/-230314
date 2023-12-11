#include<iostream>
using namespace std;
int wai(int m, int n);//声明一手
int nei(int m, int n);
int numx;
int numy;
int main() {
	int m, n;
	cin >> m >> n;
	wai(m,n);
	cout << "最大公约数等于" << numx << endl;
	nei(m,n);
	cout << "最小公倍数等于" << numy << endl;
	return 0;
}

int wai(int m, int n) {
	if (m >= n) { numx = n; }//找出小的
	else { numx = m; }
	while (m % numx != 0 || n % numx != 0) {
		numx--;
	}//递减找最大公约数
	return 0;
}
int nei(int m, int n) {
	if (m >= n) { numy = m; }//找出大的
	else { numy = n; }
	while (numy % m != 0 || numy % n != 0) {
		numy++;
	}
	return 0;
}
#include<iostream>
using namespace std;
int wai(int m, int n);//����һ��
int nei(int m, int n);
int numx;
int numy;
int main() {
	int m, n;
	cin >> m >> n;
	wai(m,n);
	cout << "���Լ������" << numx << endl;
	nei(m,n);
	cout << "��С����������" << numy << endl;
	return 0;
}

int wai(int m, int n) {
	if (m >= n) { numx = n; }//�ҳ�С��
	else { numx = m; }
	while (m % numx != 0 || n % numx != 0) {
		numx--;
	}//�ݼ������Լ��
	return 0;
}
int nei(int m, int n) {
	if (m >= n) { numy = m; }//�ҳ����
	else { numy = n; }
	while (numy % m != 0 || numy % n != 0) {
		numy++;
	}
	return 0;
}
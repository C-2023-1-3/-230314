#include<iostream>
using namespace std;

void toutao(int a) {
	for(int i=1;i<=10;i++)
	{
		a = (a + 1) * 2;
	}
	cout << "�ܹ���" << a << "������" << endl;
}
int main() {
	int a = 1;
	toutao(a);
}











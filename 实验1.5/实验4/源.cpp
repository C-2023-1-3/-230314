#include<iostream>
using namespace std;

void toutao(int a) {
	for(int i=1;i<=10;i++)
	{
		a = (a + 1) * 2;
	}
	cout << "总共有" << a << "个桃子" << endl;
}
int main() {
	int a = 1;
	toutao(a);
}











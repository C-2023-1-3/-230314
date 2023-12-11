#include <iostream>
using namespace std;
int main() {
	int a[10], c[10]{};
	int i, j;
	for (i = 0;i < 10;i++) {
		cin >> a[i];
		
	}
	cout << a[0] << " ";
	for (i = 1;i < 10;i++) {//从一到十判断是否与前面相同
		for (j = 0; j < i; j++) {
			if (a[i] == a[j]) {//如果有一次相同,判定c[i]=1
				c[i] = 1;
			}
		}
		if (c[i]==0) {//如果都不同将a[i]输出
			cout << a[i] << " ";
		}
	}
}
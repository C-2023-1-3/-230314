#include <iostream>
using namespace std;
int main() {
	int a[10], c[10]{};
	int i, j;
	for (i = 0;i < 10;i++) {
		cin >> a[i];
		
	}
	cout << a[0] << " ";
	for (i = 1;i < 10;i++) {//��һ��ʮ�ж��Ƿ���ǰ����ͬ
		for (j = 0; j < i; j++) {
			if (a[i] == a[j]) {//�����һ����ͬ,�ж�c[i]=1
				c[i] = 1;
			}
		}
		if (c[i]==0) {//�������ͬ��a[i]���
			cout << a[i] << " ";
		}
	}
}
#include<iostream>
using namespace std;
void arrange(int[], int);
int main() 
{	int size,a;
	cout << "����Ԫ�ظ���" << endl;
	cin >> size;
	int* p = new int[size];
	cout << "���������Ԫ��" << endl;
	for (int i = 0;i < size;i++)
		cin >> p[i];
	cout << "������ڼ���Ԫ��"<<endl;
	cin >> a;
	cout << "p[" << a - 1 << "]=" << *(p + a - 1) << endl;
	cout << "p[" << a - 1 << "]�ĵ�ַ=" << p + a - 1 << endl;
	arrange(p, size);
	delete p;
}
void arrange(int a[],int size) {
	for (int i = 0;i < size;i++)
	{	for (int j = 0;j < size-1;j++) {
			if (a[j] > a[j + 1]) {
				int t;
				t = a[j + 1];
				a[j + 1] = a[j];
				a[j] = t;//swap
			}
		}
	}
	cout << "��ȷ˳��Ϊ��"  <<endl;
	for (int k = 0;k < size;k++) {
		cout << a[k] << " ";
	}

}




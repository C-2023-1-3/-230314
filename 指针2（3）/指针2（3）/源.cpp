#include<iostream>
using namespace std;
void arrange(int[], int);
int main() 
{	int size,a;
	cout << "输入元素个数" << endl;
	cin >> size;
	int* p = new int[size];
	cout << "请输入各个元素" << endl;
	for (int i = 0;i < size;i++)
		cin >> p[i];
	cout << "请输入第几个元素"<<endl;
	cin >> a;
	cout << "p[" << a - 1 << "]=" << *(p + a - 1) << endl;
	cout << "p[" << a - 1 << "]的地址=" << p + a - 1 << endl;
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
	cout << "正确顺序为："  <<endl;
	for (int k = 0;k < size;k++) {
		cout << a[k] << " ";
	}

}




#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{	//把list1转移进list3
	for (int j = 0;j < size1;j++) {
		list3[j] = list1[j];}
	//把list2转移进list3
	for (int i = 0;i < size2;i++) {
		list3[size1 + i] = list2[i];}
	//排个序
	for (int a = 0;a < size1 + size2-1;a++) {
		for (int b = 0;b < size1 + size2-1;b++)//此处要-1，因为共有size1+size2个元素，所以最多取到list3[size1+size2-1]
		{
			if (list3[b] > list3[b + 1]) {
				int t;
				t = list3[b + 1];
				list3[b + 1] = list3[b];
				list3[b] = t;
			}

		}
	}
	for (int i = 0;i < size1 + size2;i++) {
		cout << list3[i] << " ";
	}
}
int main() {
	int size1, size2, size3;
	cout << "请分别输入两个数组元素数" << endl;
	cin >> size1 >> size2;

	int(*list1) = new int[size1];
	int(*list2) = new int[size2];
	
	for (int i = 0;i < size1;i++) {
		cin >> list1[i];
	}
	for (int i = 0;i < size2;i++) {
		cin >> list2[i];
	}
	size3 = size1 + size2;
	int(*list3) = new int[size3];
	merge(list1, size1, list2, size2, list3);	
	delete[]list1;
	delete[]list2;
}

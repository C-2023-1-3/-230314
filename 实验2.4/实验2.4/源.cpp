#include<iostream>
using namespace std;
void merge(const int list1[], int size1, const int list2[], int size2, int list3[])
{	//��list1ת�ƽ�list3
	for (int j = 0;j < size1;j++) {
		list3[j] = list1[j];}
	//��list2ת�ƽ�list3
	for (int i = 0;i < size2;i++) {
		list3[size1 + i] = list2[i];}
	//�Ÿ���
	for (int a = 0;a < size1 + size2-1;a++) {
		for (int b = 0;b < size1 + size2-1;b++)//�˴�Ҫ-1����Ϊ����size1+size2��Ԫ�أ��������ȡ��list3[size1+size2-1]
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
	cout << "��ֱ�������������Ԫ����" << endl;
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

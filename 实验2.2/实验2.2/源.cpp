#include<iostream>
using namespace std;
const int listSize = 10;
void xiaodongxi(double list[10]) {
	double a;
	bool changed = true;
	do {
		changed = false;
		for (int j = 0;j < listSize - 1;j++) {
			if (list[j] > list[j + 1])
			{swap (list[j],list[j + 1]);
				changed = true;}
		}
	} while (changed);
}
int main() {
	double list[listSize];
	cout << "请输入十个数字" << endl;
	for (int i = 0;i < listSize;i++) {
		cin >> list[i];
	}
	xiaodongxi(list) ;
	for (int i = 0;i < listSize;i++) {
		cout << list[i] << " ";
	}
}
















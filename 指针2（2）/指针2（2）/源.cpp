#include <iostream>
using namespace std;
int parseHex(const char* const hexString);
int main() {
	int size = 999;
	char* s = new char[size];
	cout << "����ʮ������������ַ���:"<<endl;
	cin.getline(s, size);
	cout << "ת����ʮ����Ϊ:" << parseHex(s) << " in decimal\n";
	return 0;
}
int parseHex(const char* const hexString) {

	int a, sum = 0;
	a = strlen(hexString);
	int* list = new int[a];
	for (int i = 0;i < a;i++)
	{
		if (hexString[i] >= 'A' && hexString[i] <= 'F')
			list[i] = (static_cast<int>(hexString[i]) - 55) * (pow(16, a - 1 - i));
		else
			list[i] = (hexString[i] - 48) * pow(16, a - i - 1);
		sum = sum + list[i];

	}
	return sum;
}
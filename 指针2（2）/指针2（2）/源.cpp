#include <iostream>
using namespace std;
int parseHex(const char* const hexString);
int main() {
	int size = 999;
	char* s = new char[size];
	cout << "请用十六进制输入该字符串:"<<endl;
	cin.getline(s, size);
	cout << "转换成十进制为:" << parseHex(s) << " in decimal\n";
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
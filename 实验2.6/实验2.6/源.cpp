#include <iostream>
using namespace std;

const int num1 = 26;  
const int num2 = 999;  

void count(const char s[], int counts[])
{
	for (int i = 0;i < num1;i++)
		counts[i] = 0;
	for (int j = 0;j < num2;j++)
	{
		counts[s[j] - 'a']++;
		counts[s[j] - 'A']++;
	}
}
void displayCounts(const int counts[])
{
	for (int i = 0;i < num1;i++) {
		if (counts[i] != 0)
			cout << static_cast<char>(i + 'a') << " : " << counts[i] << "  times " << endl;
	}
}

int main()
{
	char list[num2];
	int counts[num1];
	cout << "Enter a string : ";
	cin.getline(list, num2);
	count(list, counts);
	displayCounts(counts);

	return 0;
}














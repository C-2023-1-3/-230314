#include <iostream>
using namespace std;
bool is_prime(int num) {
	for (int a = 2; a <num - 1;a++) {
		if (num % a == 0) {
			return false;
		}
	}
	return true;
}
void prime(int num) {
	int start = 2, sum = 200;

	while (num < sum) {
		if (is_prime(start)) {
			num++;
			cout << start << ' ';
			if (num % 10 == 0) {
				cout << endl;
			}
		}
		start++;
	}
}
int main(){
	int a = 0;
	prime(a);
}













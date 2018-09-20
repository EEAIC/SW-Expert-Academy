#include <iostream>

using namespace std;

int main() {
	int num, pwd;
	cin >> pwd >> num;
	cout << (pwd - num + 1 >= 0? pwd - num + 1 : -1);

	return 0;
}
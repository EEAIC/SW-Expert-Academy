#include <iostream>
#include <string>

using namespace std;

int main() {
	string num;
	int rst = 0;
	cin >> num;
	for (unsigned int i = 0; i < num.length(); i++) {
		rst += num[i] - '0';
	}
	cout << rst << endl;
	return 0;
}
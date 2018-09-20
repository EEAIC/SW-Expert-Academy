#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;

	cout << str[0] - 'A' + 1;
	for (unsigned int s = 1; s < str.length(); s++) {
		cout << " ";
		cout << str[s] - 'A' + 1;
		
	}
	return 0;
}
#include <iostream>
#include <string>

using namespace std;

int main() {
	string str;
	cin >> str;
	char tmp;
	for (char c : str) {
		tmp = c;
		if ('a' <= c && c <= 'z') tmp -= 32;
		cout << tmp;
	}

	return 0;
}
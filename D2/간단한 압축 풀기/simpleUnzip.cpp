#include <iostream>
#include <string>
using namespace std;

int main() {
	int loop;
	cin >> loop;
	int numOfChar;
	
	char Character;
	int num;
	string str;
	for (int i = 1; i <= loop; i++) {
		str.clear();
		cin >> numOfChar;
		for (int i = 0; i < numOfChar; i++) {
			cin >> Character;
			cin >> num;
			str += string(num, Character);
		}
		cout << "#" << i << endl;
		for (unsigned int i = 0; i < str.length(); i++) {
			cout << str[i];
			if ((i + 1) % 10 == 0) cout << endl;

		}
		cout << endl;
		
	}

	return 0;
}
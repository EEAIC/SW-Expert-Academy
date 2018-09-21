#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int loop;
	cin >> loop;
	string str;
	string cmpstr;
	for (int i = 1; i <= loop; i++) {
		cin >> str;
		cmpstr = str;
		reverse(cmpstr.begin(), cmpstr.end());
		bool rst = !str.compare(cmpstr);
		cout << "#" << i << " ";
		cout << rst << endl;
	}
	return 0;
}
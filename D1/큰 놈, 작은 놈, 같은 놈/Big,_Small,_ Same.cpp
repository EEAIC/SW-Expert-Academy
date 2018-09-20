#include <iostream>

using namespace std;

int main() {
	int loop;
	cin >> loop;

	int numA, numB;
	for (int i = 1; i <= loop; i++) {
		cin >> numA >> numB;
		cout << "#" << i << " ";
		if (numA > numB) {
			cout << ">" << endl;
		}
		else if (numA == numB) {
			cout << "=" << endl;
		}
		else {
			cout << "<" << endl;
		}
	}
	return 0;
}
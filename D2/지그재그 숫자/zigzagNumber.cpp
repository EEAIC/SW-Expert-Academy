#include <iostream>

using namespace std;

int main() {
	int loop;
	cin >> loop;
	int num;
	int tmp;

	for (int i = 1; i <= loop; i++) {
		cin >> num;
		tmp = num / 2 * -1;
		cout << "#" << i << " ";
		if (num % 2 == 0) {
			cout << tmp;
		}
		else {
			cout << tmp + num;
		}
		cout << endl;
	}


	return 0;
}
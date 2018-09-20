#include <iostream>

using namespace std;

int main() {
	int loop;
	int num;
	int max;
	cin >> loop;
	for (int i = 1; i <= loop; i++) {
		cin >> num;
		max = num;
		cout << "#" << i << " ";
		for (int j = 1; j < 10; j++) {
			cin >> num;
			if (num > max) {
				max = num;
			}
		}
		cout << max << endl;
	}
	return 0;
}
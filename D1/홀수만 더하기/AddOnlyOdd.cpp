#include <iostream>

using namespace std;

int main() {
	int loop;
	cin >> loop;
	
	for (int i = 1; i <= loop; i++) {
		cout << "#" << i << " ";
		int num[10] = {};
		int sum = 0;
		for (int j = 0; j < 10; j++) {
			cin >> num[i];
			if (num[i] % 2) sum += num[i];
		}
		cout << sum << endl;
	}
	return 0;
}
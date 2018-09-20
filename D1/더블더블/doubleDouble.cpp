#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int num;
	cin >> num;
	for (int i = 0; i <= num; i++) {
		cout << pow(2, i);
		if (i == num) continue;
		cout << " ";
	}
	return 0;
}
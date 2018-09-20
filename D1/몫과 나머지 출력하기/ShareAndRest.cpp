#include <iostream>

using namespace std;

int main() {
	int loop;
	cin >> loop;
	int A, B;
	for (int i = 1; i <= loop; i++) {
		cin >> A >> B;
		cout << "#" << i << " " << A / B << " " << A % B << endl;
	}


	return 0;
}
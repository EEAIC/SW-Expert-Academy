#include <iostream>

using namespace std;

int main() {
	int A, B;
	cin >> A >> B;
	switch (A * B)
	{
	case 2:
		cout << (A == 1 ? 'B' : 'A');
		break;
	case 3:
		cout << (A == 1 ? 'A' : 'B');
		break;
	case 6:
		cout << (A == 2 ? 'B' : 'A');
		break;
	}
	return 0;
}
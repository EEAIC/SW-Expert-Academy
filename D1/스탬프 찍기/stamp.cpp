#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	int num;
	cin >> num;
	cout << setfill('#') << setw(num);
	cout << "";
	return 0;
}
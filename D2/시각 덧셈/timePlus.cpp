#include <iostream>

using namespace std;

int main() {
	int loop;
	cin >> loop;
	int timeA, timeB;
	int hour, min;
	for (int i = 1; i <= loop; i++) {
		cin >> hour >> min;
		timeA = hour * 60 + min;

		cin >> hour >> min;
		timeB = hour * 60 + min;

		hour = (timeA + timeB) / 60;
		hour = hour > 12 ? hour - 12 : hour;

		min = (timeA + timeB) % 60;
		cout << "#" << i << " ";
		cout << hour << " " << min << endl;
	}

	return 0;
}
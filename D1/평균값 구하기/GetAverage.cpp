#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int loop;
	cin >> loop;
	int num = 0;
	float rst = 0;
	for (int i = 1; i <= loop; i++) {
		cout << "#" << i << " ";
		rst = 0;
		for (int j = 0; j < 10; j++) {
			cin >> num;
			rst += num;
		}
		cout << round(rst / 10) << endl;
	}
	return 0;
}
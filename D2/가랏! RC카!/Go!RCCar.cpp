#include <iostream>

using namespace std;

int main() {
	int loop;
	int seconds;
	int speed = 0;
	int mode = 0;
	int acc = 0;
	int rst = 0;
	cin >> loop;
	for (int i = 1; i <= loop; i++) {
		cin >> seconds;
		speed = 0;
		rst = 0;
		for (int j = 0; j < seconds; j++) {
			cin >> mode;
			if (mode != 0) cin >> acc;
			switch (mode)
			{
			case 0:
				rst += speed;
				break;
			case 1:
				speed += acc;
				rst += speed;
				break;
			case 2:
				speed -= acc;
				if (speed < 0) speed = 0;
				rst += speed;
				break;
			}
		}

		cout << "#" << i << " " << rst << endl;

	}


	return 0;
}
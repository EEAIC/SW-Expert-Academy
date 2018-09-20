#include <iostream>
#include <string>

#define dayEnd(d, e) (1 <= d && d <= e) 

using namespace std;

bool dayEffectivenss(int month, int day) {
	switch (month)
	{
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		if (dayEnd(day, 31)) return 0;
		break;
	case 2:
		if (dayEnd(day, 28)) return 0;
		break;
	case 4: case 6: case 9: case 11:
		if (dayEnd(day, 30)) return 0;
		break;
	default:
		break;
	}
	return 1;
}

int main() {
	short loop;
	cin >> loop;
	char date[9];
	char year[5] = { '\n' };
	char month[3] = { '\n' };
	char day[3] = { '\n' };
	for (int i = 1; i <= loop; i++) {
		cout << "#" << i << " ";
		cin >> date;
		copy(date, date + 4, year);
		copy(date + 4, date + 6, month);
		copy(date + 6, date + 8, day);
		

		if (dayEffectivenss(atoi(month), atoi(day))) {
			cout << "-1" << endl;
		}
		else {
			cout << year << "/" << month << "/" << day << endl;
		}
	}
	return 0;
}
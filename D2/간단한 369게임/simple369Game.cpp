#include <iostream>
#include <string>


using namespace std;

int check(string num) {
	int cnt = 0;
	for (int i = 0; i < num.length(); i++) {
		if (num[i] == '3' || num[i] == '6' || num[i] == '9') {
			cnt++;
		}
	}
	return cnt;
}

int main() {
	string num;
	cin >> num;
	int cnt;
	for (int i = 1; i <= stoi(num); i++) {
		cnt = check(to_string(i));
		if (i > 1) cout << " ";
		if (cnt > 0) {
			cout << string(cnt, '-');
			continue;
		}
		cout << to_string(i);
		
	}
	return 0;
}
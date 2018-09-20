#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int loop;
	cin >> loop;
	
	vector<int> nums;

	for (int i = 1; i <= loop; i++) {
		int numofnum;
		cin >> numofnum;
		cout << "#" << i;
		nums.clear();
		for (int j = 0; j < numofnum; j++) {
			int num;
			cin >> num;
			nums.push_back(num);
		}
		sort(nums.begin(), nums.end());
		for (int n : nums) {
			cout << " ";
			cout << n;
		}
		cout << endl;
	}

	return 0;
}
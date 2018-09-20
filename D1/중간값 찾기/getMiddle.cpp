#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int loop;
	cin >> loop;
	vector<int> nums;
	for (int i = 0, num; i < loop; i++) {
		cin >> num;
		nums.push_back(num);
	}
	sort(nums.begin(), nums.end());
	cout << nums[loop/ 2] << endl;
	return 0;
}
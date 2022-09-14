//ÆùÄÏ¸ó
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> nums(6);
	nums.assign({ 3, 3, 3, 2, 2, 2 });
	int answer = 0;
	int pick = nums.size() / 2;

	sort(nums.begin(), nums.end());
	nums.erase(unique(nums.begin(), nums.end()), nums.end());

	if (nums.size() >= pick) {
		answer = pick;
	}
	else {
		answer = nums.size();
	}

	cout << answer;
	return 0;
}

/*
#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);



	return 0;
}
*/
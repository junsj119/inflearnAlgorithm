//33. 3등의 성적은? sort desc 후 중복제거 한 다음에 vec[2] 하면 되는데...
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int arr[101];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	vector<int>vec(n);

	for (int i = 0; i < n; i++)
		cin >> vec[i];

	sort(vec.begin(), vec.end(), greater<>());
	vec.erase(unique(vec.begin(), vec.end()), vec.end());

	cout << vec[2];

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

		int n, idx, tmp, cnt = 0;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n - 1; i++) {
		idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] > arr[idx])
				idx = j;
		}
		tmp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = tmp;
	}

	for (int i = 0; i < n - 1; i++) {
		if (arr[i] != arr[i + 1]) {
			cnt++;
		}
		if (cnt == 2) {
			cout << arr[i + 1];
			exit(0);
		}
	}

	return 0;
}
*/
//42. 이분검색
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	vector<int> vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i];

	sort(vec.begin(), vec.end());

	int start = 0;
	int end = n - 1;
	int mid;
	while (1) {
		mid = (start + end) / 2;
		if (vec[mid] == m) {
			cout << mid + 1;
			exit(0);
		}
		else if (vec[mid] > m) {
			end = mid - 1;
		}
		else if (vec[mid] < m) {
			start = mid + 1;
		}
	}
	return 0;
}

/*
#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(fals e);
	cin.tie(NULL);
	cout.tie(NULL);



	return 0;
}
*/
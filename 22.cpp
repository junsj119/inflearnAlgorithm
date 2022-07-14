//22. 온도의 최대값	(시간초과)
#include<iostream>
#include<vector>
using namespace std;
int arr[100001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k, max = -200000000;
	cin >> n >> k;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n - k + 1; i++) {
		int cnt = 0;
		for (int j = i; j < i + k; j++) {
			if (j > n)
				break;
			cnt += arr[j];
		}
		if (cnt > max)
			max = cnt;
	}
	cout << max;

	

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

	int n, k, sum = 0, max = 0;
	cin >> n >> k;
	vector<int>vec(n);
	for (int i = 0; i < n; i++)
		cin >> vec[i];

	for (int i = 0; i < k; i++)
		sum += vec[i];

	max = sum;
	for (int i = k; i < n; i++) {
		sum = sum + (vec[i] - vec[i - k]);
		if (sum > max)	max = sum;
	}
	cout << max;


	return 0;
}
*/
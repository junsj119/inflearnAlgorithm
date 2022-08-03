//39. 두 배열 합치기
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int arr1[101];
int arr2[101];
int arr3[101];
vector<int>vec;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n;

	for (int i = 0; i < n; i++)
	{
		cin >> arr1[i];
		vec.push_back(arr1[i]);
	}

	cin >> m;
	for (int i = 0; i < m; i++)
	{
		cin >> arr2[i];
		vec.push_back(arr2[i]);
	}
	sort(vec.begin(), vec.end());

	for (int i = 0; i < n + m; i++)
		cout << vec[i] << " ";

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

	int n, m;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr1[i];

	cin >> m;
	for (int i = 0; i < m; i++)
		cin >> arr2[i];


	int p1 = 0;
	int p2 = 0;
	int p3 = 0;
	while (1) {
		if (p1 > n - 1 || p2 > m - 1)
			break;

		if (arr1[p1] > arr2[p2]) {
			arr3[p3] = arr2[p2];
			p2++; p3++;
		}
		else if (arr1[p1] < arr2[p2]) {
			arr3[p3] = arr1[p1];
			p1++; p3++;
		}
		else if (arr1[p1] == arr2[p2]) {
			arr3[p3] = arr2[p2];
			p2++; p3++;
		}
	}

	while (p1 < n) {
		arr3[p3] = arr1[p1];
		p1++; p3++;
	}
	while (p2 < m) {
		arr3[p3] = arr2[p2];
		p2++; p3++;
	}

	for (int i = 0; i < n+m; i++) {
		cout << arr3[i] << " ";
	}

	return 0;
}
*/
//32. 선택 정렬
#include<iostream>
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

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	sort(arr, arr + n);

	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
	

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

	int n, idx, tmp;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n - 1; i++) {
		idx = i;
		for (int j = i + 1; j < n; j++) {
			if (arr[j] < arr[idx])
				idx = j;
		}
		tmp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = tmp;
	}

	for (int i = 0; i < n; i++)
		cout << arr[i];


	return 0;
}
*/
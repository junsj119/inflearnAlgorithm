//9. 모두의 약수
#include<iostream>
using namespace std;

int arr[50001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		for (int j = i; j <= n; j = j + i) {
			arr[j]++;
		}
	}
	for (int i = 1; i <= n; i++) {
		cout << arr[i] << " ";
	}

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
//36. »ğÀÔÁ¤·Ä
#include<iostream>
using namespace std;

int arr[101];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, tmp, j;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 1; i < n; i++) {
		tmp = arr[i];
		for (j = i - 1; j >= 0; j--) {
			if (tmp < arr[j])
				arr[j+1] = arr[j];
			else
				break;
		}
		arr[j + 1] = tmp;
	}

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



	return 0;
}
*/
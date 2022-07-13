//20. 가위 바위 보
#include<iostream>
#include<vector>
using namespace std;

int arr1[101];
int arr2[101];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++)
		cin >> arr1[i];

	for (int i = 0; i < n; i++)
		cin >> arr2[i];

	for (int i = 0; i < n; i++) {

		if (arr1[i] > arr2[i]) {
			if (arr1[i] == 3 && arr2[i] == 1)
				cout << "B";
			else if (arr1[i] == arr2[i])
				cout << "D";
			else
				cout << "A";
		}
		else{
			if (arr1[i] == 1 && arr2[i] == 3)
				cout << "A";
			else if (arr1[i] == arr2[i])
				cout << "D";
			else
				cout << "B";
		}
			
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

		for (int i = 1; i <= n; i++) {
		if (arr1[i] == arr2[i]) cout << "D";
		else if (arr1[i] == 1 && arr2[i] == 3) cout << "A";
		else if (arr1[i] == 2 && arr2[i] == 1) cout << "A";
		else if (arr1[i] == 3 && arr2[i] == 2) cout << "A";
		else cout << "B";
	}

	return 0;
}
*/
//24. Jolly Jumpers
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int>vec(n);
	vector<int>a(n);

	for (int i = 0; i < n; i++)
		cin >> a[i];

	for (int i = 0; i < n-1; i++) {
		int tmp = abs(a[i] - a[i + 1]);

		if (tmp > n) {
			cout << "NO";
			exit(0);
		}	

		if(vec[tmp] == 0)
			vec[tmp]++;
		else {
			cout << "NO";
			exit(0);
		}
	}
	cout << "YES";

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
//17. ¼±»ı´Ô ÄûÁî
#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b, sum = 0;
		cin >> a >> b;

		for (int j = 1; j <= a; j++)
			sum += j;

		if (b == sum)
			cout << "YES";
		else
			cout << "NO";
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
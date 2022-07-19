//29. 3의 개수는?(small)
#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, tmp, cnt = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		tmp = i;
		string s = to_string(tmp);

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '3')
				cnt++;
		}
	}
	cout << cnt;

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

	int n, cnt = 0, tmp, digit;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		tmp = i;
		while (tmp > 0) {
			digit = tmp % 10;
			if (digit == 3)
				cnt++;

			tmp = tmp / 10;
		}
	}
	cout << cnt;

	return 0;
}
*/
//팩토리얼 0의 개수
#include<iostream>
#include <sstream>
#include<vector>
#include<stack>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
	int n;
	cin >> n;	//26

	int cnt = 0;
	for (int i = 5; i <= n; i *= 5) {
		cnt += n / i;
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

		int num;	//입력값
	cin >> num;

	long tmp = 1;
	int ans = 0;
	for (int i = num; i >= 1; i--)
		tmp *= i;

	string s = to_string(tmp);
	reverse(s.begin(), s.end());

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == '0')
			ans++;
		else
			break;
	}

	cout << ans;
	return 0;

	return 0;
}
*/
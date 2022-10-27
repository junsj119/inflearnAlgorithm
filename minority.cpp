//
#include<iostream>
#include <sstream>
#include<vector>
#include<stack>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;

int main() {
	int n, m;
	int sum = 0, min = -1;
	int cnt = 0;
	cin >> n >> m;

	for (int i = n; i <= m; i++) {
		for (int j = 1; j <= i; j++) {
			if (i % j == 0)
				cnt++;
		}
		if (cnt == 2) {
			if (min == -1)
				min = i;
			sum += i;
		}
		cnt = 0;
	}
	if (min == -1)
		cout << -1 << '\n';
	else
		cout << sum << '\n' << min;
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
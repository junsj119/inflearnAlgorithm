//44. 마구간 정하기(이분검색 응용)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int a[1001], n;

int Count(int len, int x[]) {		// s = mid
	int cnt = 1, pos = x[1];

	for (int i = 2; i <= n; i++) {
		if (x[i] - pos >= len) {
			cnt++;
			pos = x[i];
		}
	}
	return cnt;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, start = 1, end = 0, mid, res, max = 0;
	cin >> n >> m;		// 5 3

	int *x = new int[n + 1];		//범위가 넓기 때문에 동적으로 잡았다.

	for (int i = 1; i <= n; i++) {
		cin >> x[i];
	}
	sort(x + 1, x + 1 + n);
	end = x[n];

	while (start < end) {
		mid = (start + end) / 2;

		if (Count(mid, x) >= m) { 
			res = mid;
			start = mid + 1;
		}
		else
			start = mid - 1;
	}

	cout << res;
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
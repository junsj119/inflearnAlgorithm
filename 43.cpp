//43. 뮤직비디오(이분검색 응용 : 결정 알고리즘)
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int a[1001], n;

int Count(int s) {		// s = mid
	int cnt = 1, sum = 0;

	for (int i = 1; i <= n; i++) {
		if (sum + i > s) {	// 안되는 부분(DVD 추가)
			cnt++;
			sum = i;	//초기화
		}
		else
			sum += i;
	}
	return cnt;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int m, start = 1, end = 0, mid, res, max = 0;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		end += i;
	}
	max = n;

	while (start < end) {
		mid = (start + end) / 2;

		if (mid >= max && Count(mid) <= m) { // 갯수 리턴
			res = mid;
			end = mid - 1;
		}
		else
			start = mid + 1;
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
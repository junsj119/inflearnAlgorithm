//11. 숫자의 총 개수
#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, cnt = 0, tmp;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		tmp = i;
		while (tmp > 0) {
			tmp = tmp / 10;
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



	return 0;
}
*/
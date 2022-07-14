//23. 연속 부분 증가수열
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, tmp = 0, cnt = 1, max = -200000000;
	cin >> n;
	vector<int>vec(n);

	for (int i = 0; i < n; i++)
		cin >> vec[i];

	tmp = vec[0];
	for (int i = 0; i < n-1; i++) {
		if (tmp <= vec[i+1])
			cnt++;
		else {
			if (cnt > max)
				max = cnt;
			cnt = 1;
		}
		tmp = vec[i + 1];
	}
	if(cnt == n)
		max = cnt;
	cout << max;

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
//60. 합이 같은 부분집합
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

int n, a[11], total = 0;
bool flag = false;

void DFS(int L, int sum) {
	
	if (sum > (total / 2))
		return;

	if (flag == true)
		return;

	if (L == n + 1) {
		if (sum == (total - sum)) {
			flag = true;
		}
	}
	else {
		DFS(L + 1, sum + a[L]);
		DFS(L + 1, sum);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		cin >> a[i];
		total += a[i];
	}

	DFS(1, 0);
	if (flag)
		cout << "YES";
	else
		cout << "NO";

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
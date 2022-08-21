//59. 부분집합(DFS 완전탐색)
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

int n, ch[11];

void DFS(int L) {
	if (L == n + 1) {
		for (int i = 1; i <= n; i++) {
			if (ch[i] == 1)
				cout << i << " ";
		}
		cout << '\n';
	}
	else {
		ch[L] = 1;
		DFS(L + 1);

		ch[L] = 0;
		DFS(L + 1);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;
	DFS(1);

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
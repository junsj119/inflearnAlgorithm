//45. 공주 구하기(조세퍼스)		강의는 구현했는데 일단 시간 없어서 패스
#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	queue<int>q;
	int n, k, tmp;
	cin >> n >> k;

	for (int i = 1; i < n + 1; i++)
		q.push(i);
	
	while (q.size() > 1) {
		for (int i = 0; i < k - 1; i++) {
			tmp = q.front();
			q.push(tmp);
			q.pop();
		}
		q.pop();
	}
	cout << q.front();

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
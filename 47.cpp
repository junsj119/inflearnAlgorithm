//47. 봉우리
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int a[60][60];
int dx[4] = { -1, 0, 1, 0 };
int dy[4] = { 0, 1, 0, -1 };
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k, cnt = 0, flag;
	cin >> n;

	//2차원 vector 초기화
	//vector<vector<int>>map(n + 2, vector<int>(n + 2, 0));		//1차원 배열을 넣을 수 있는 크기, 원소가 들어갈 크기

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			cin >> a[i][j];
		}
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			flag = 0;
			for (int k = 0; k < 4; k++) {
				if (a[i][j] <= a[i + dx[k]][j + dy[k]]) {	//if문 안에 들어가면 봉우리가 아닌 것
					flag = 1;
					break;
				}
			}
			if (flag == 0)
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
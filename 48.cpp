//48. 각 행의 평균과 가장 가까운 값
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int a[60][60];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int ans, cor;

	for (int i = 0; i < 9; i++) {
		int sum = 0;
		for (int j = 0; j < 9; j++) {
			cin >> a[i][j];
			sum += a[i][j];
		}

		int avg = (sum/9.0)+0.5;
		int tmp = 210000000;

		for (int j = 0; j < 9; j++) {
			ans = abs(avg - a[i][j]);		//평균 - 원소
			if (tmp > ans)
			{
				tmp = ans;
				cor = a[i][j];
			}
			else if (ans == tmp) {
				if (a[i][j] > cor)
					cor = a[i][j];
			}
	
		}
		cout << avg << " " << cor << '\n';
	}

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
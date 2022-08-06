//15. 소수의 개수
#include<iostream>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, flag, cnt = 0;
	cin >> n;

	for (int i = 2; i <= n; i++) {
		flag = 1;
		for (int j = 2; j <= sqrt(i); j++) {
			if (i % j == 0) {	//약수가 발견됐는데 더 볼 필요가 없다.
				flag = 0;
				break;
			}
		}
		if (flag == 1) 
			cnt++;
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
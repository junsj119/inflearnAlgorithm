//15. �Ҽ��� ����
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
			if (i % j == 0) {	//����� �߰ߵƴµ� �� �� �ʿ䰡 ����.
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
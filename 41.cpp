//41. ���ӵ� �ڿ����� ��
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, cnt = 0;
	cin >> n;

	for (int i = 1; i < n; i++) {
		int sum = 0;
		vector<int>vec(n);

		for (int j = i; j < n; j++) {
			//�ִ��� �ð� ����
			if (i + (i + 1) > n)
				exit(0);

			//15�� �Ѿ�ų� �� ������ break;
			if (sum > n || sum == n)
				break;

			vec[j] = j;
			sum += j;
		}

		if (sum == n) {
			cnt++;
			for (int k = i; k <= vec.size(); k++) {
				//0 ������ �ٷ� break;
				if (vec[k] == 0)
					break;

				cout << vec[k];

				sum -= vec[k];	// �� �����ٺ��� 0�� �Ǿ��Ѵ�. �׷��� 15�� �Ǵ��� �ȵǴ��� �ȴ�.

				if (sum == 0) {
					cout << " = " << n << endl;
					break;
				}
				cout << " + ";
			}
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
	ios::sync_with_stdio(fals e);
	cin.tie(NULL);
	cout.tie(NULL);

		int a, b=1, cnt=0, tmp;
	cin >> a;
	tmp = a; // ���� ���� ����

	a--;
	while (a > 0) {
		b++;
		a = a - b;
		if (a % b == 0) { //���ӵ� �ڿ����� �� �� �ִ�.
			for (int i = 1; i < b; i++) {
				cout << (a / b) + i << " + ";
			}
			cout << (a / b) + b << "=" << tmp;
		}
	}

	return 0;
}
*/
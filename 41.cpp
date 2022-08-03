//41. 연속된 자연수의 합
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
			//최대한 시간 단축
			if (i + (i + 1) > n)
				exit(0);

			//15가 넘어가거나 딱 맞으면 break;
			if (sum > n || sum == n)
				break;

			vec[j] = j;
			sum += j;
		}

		if (sum == n) {
			cnt++;
			for (int k = i; k <= vec.size(); k++) {
				//0 나오면 바로 break;
				if (vec[k] == 0)
					break;

				cout << vec[k];

				sum -= vec[k];	// 쭉 빼가다보면 0이 되야한다. 그래야 15가 되는지 안되는지 안다.

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
	tmp = a; // 받은 숫자 저장

	a--;
	while (a > 0) {
		b++;
		a = a - b;
		if (a % b == 0) { //연속된 자연수가 될 수 있다.
			for (int i = 1; i < b; i++) {
				cout << (a / b) + i << " + ";
			}
			cout << (a / b) + b << "=" << tmp;
		}
	}

	return 0;
}
*/
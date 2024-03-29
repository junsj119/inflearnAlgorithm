//27. N!의 표현법
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, tmp, j;
	cin >> n;
	vector<int>vec(n + 1, 0);

	for (int i = 1; i <= n; i++) {
		tmp = i;
		j = 2;
		while (1) {
			if (tmp % j == 0) {	//0이 될때까지 나누면서 증가시켜준다.
				tmp = tmp / j;
				vec[j]++;
			}
			else // 나누어 떨어지지 않으면 j 를 증가
				j++;

			if (tmp == 1)
				break;
		}
	}

	cout << n << +"! = ";
	for (int i = 1; i <= n; i++)
	{
		if (vec[i] != 0)
			cout << vec[i] << " ";
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
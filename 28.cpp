//28. N!에서 0의 개수
#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, tmp, j, cnt1 = 0, cnt2 = 0;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		tmp = i;
		j = 2;
		while (1) {
			if (tmp % j == 0) {
				if (j == 2)
					cnt1++;
				else if (j == 5)
					cnt2++;

				tmp = tmp / j;
			}
			else
				j++;
			
			if (tmp == 1)
				break;
		}
	}
	int ans = cnt1 > cnt2 ? cnt2 : cnt1;
	cout << ans;



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
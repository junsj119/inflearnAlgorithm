//18. Ãþ°£ ¼ÒÀ½
#include<iostream>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, cnt = 0, tmp, de, max = 0;

	cin >> n >> tmp;
	for (int i = 0; i < n; i++) {
		cin >> de;
		if (tmp < de)
		{
			cnt++;
			if (max < cnt)
				max = cnt;
		}
		else
			cnt = 0;
	}
	cout << max;


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
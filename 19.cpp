//19. 분노 유발자
#include<iostream>
using namespace std;

int arr[101];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int n, tall, ans = 0;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> arr[i];

	for (int i = 0; i < n-1; i++) {
		int cnt = 0;
		for (int j = i + 1; j < n; j++) {
			if (arr[i] > arr[j])
				cnt++;
			else
				break;
		}
		if (cnt == n - i - 1)
			ans++;
	}
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
//13. 가장 많이 사용된 자릿수
#include<iostream>
#include<string>
using namespace std;

int arr[10];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	string s;
	cin >> s;
	int digit, max = 0, res;

	for (int i = 0; i < s.length(); i++) {
		digit = s[i] - '0';
		arr[digit]++;
	}
	for (int i = 0; i <= 9; i++) {
		if (arr[i] > max) {
			max = arr[i];
			res = i;
		}
	}

	cout << res;
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
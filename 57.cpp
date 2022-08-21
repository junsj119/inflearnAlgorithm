//57. 재귀함수를 이용한 2진수 출력
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

void D(int x) {
	int tmp;
	if (x == 0)
		return;
	else{
		tmp = x % 2;
		x = x / 2;
		D(x);

		cout << tmp;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	D(n);

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
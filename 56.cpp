//56. 재귀함수 분석
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

void D(int x) {		//재귀는 스택이라는 자료구조를 사용하면서 운영된다.
	if (x == 0)
		return;
	else
	{
		D(x - 1);
		cout << x;
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
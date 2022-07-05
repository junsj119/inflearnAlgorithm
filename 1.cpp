//1부터 N까지 M의 배수합
#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, sum = 0;
	cin >> n >> m;
	for (int i = 1; i <= n; i++) 
	{
		if (i % m == 0) 
			sum += i;
	}
	cout << sum;
	return 0;
}
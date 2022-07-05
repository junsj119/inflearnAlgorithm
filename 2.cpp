// 2. 자연수의 합
#include<iostream>
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, i, sum = 0;
	cin >> n >> m;
	for (i = n; i < m; i++) 
	{
		cout << i << " + ";
		sum += i;
	}
	cout << i << " = " << sum + i;
	return 0;
}
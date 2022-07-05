//3. 진약수의 합
#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, sum = 0;		//n = 20
	cin >> n;
	cout << "1";
	for (int i = 2; i < n; i++) 
	{
		if (n % i == 0) 
		{
			cout << " + " << i;
			sum += i;
		}
	}
	cout << " = " << sum + 1;

	return 0;
}
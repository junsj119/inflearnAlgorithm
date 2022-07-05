//4. 나이 차이
#include<iostream>
using namespace std;

int main() 
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	freopen("input.txt", "rt", stdin);
	int n, a, max = -2147000000, min = 2147000000;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a > max)
			max = a;
		else	//a < max
			if (min > a)
				min = a;
	}
	cout << max - min;
	return 0;
}

/*
#include<iostream>
using namespace std;

int main() {

	int n, a, max = -2147000000, min = 2147000000;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a;
		if (a > max) max = a;
		if (a < min) min = a;
	}
	cout << max - min;
	return 0;
}
*/
//12.������ �� ����(large)
#include<iostream>
using namespace std;
int arr[4] = { 9, 90, 900, 9000 };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, sum = 0, c = 1, d = 9, res = 0;
	cin >> n;
	while (sum + d < n) {	// ����
		res = res + (c * d);// ��ȯ ��
		sum = sum + d;		// �� ����
		c++;				// �ڸ��� ���ϱ�
		d = d * 10;
	}
	int a = n - sum;
	res = (a * c) + res;
	
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
//56. ����Լ� �м�
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

void D(int x) {		//��ʹ� �����̶�� �ڷᱸ���� ����ϸ鼭 ��ȴ�.
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
//46. 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

#define MAX 210000000
int a[2001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	vector<int>vec(n);

	for (int i = 0; i < n; i++)
		cin >> vec[i];

	int k, tmp;
	cin >> k;
	k++;

	int c = 0;
	for (int i = 0; i < MAX; i++) {
		if (k == 0) {
			tmp = i;
			break;
		}

		if (i >= n) {	//overflow ����
			i = 0;
			for (int j = 0; j < n; j++) {	//��ü ���鼭 ��� 0���� üũ
				if (vec[j] != 0)
					c++;
			}
			if (c == 0) {		//0�̸� break
				tmp = -1;
				break;
			}
			else				//�ƴϸ� c �ʱ�ȭ �� �ٽ� ����
				c = 0;
		}

		if (vec[i] != 0) {	//0�� �� ���� ����
			vec[i]--;
			k--;
		}
	}

	cout << tmp;


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

		int n, k, p = 0, cnt = 0, tot = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> a[i];
		tot += a[i];
	}

	cin >> k;
	if (k >= tot) {
		cout << -1;
		return 0;
	}

	while (1) {
		if (p >= n)
			p = 0;

		if (a[p] == 0)
			continue;

		a[p]--;
		cnt++;
		if (cnt == k)
			break;
	}
	while(1){
		p++;
		if (p > n)
			p = 1;
		if (a[p] != 0)
			break;
	}
	cout << p;

	return 0;
}
*/
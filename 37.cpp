//37. Least Recently Used(�������� �ڵ� ��Ÿ��:īī�� ĳ�� ���� ����)
//�Ʒ��� ���� Ǭ ��, �߸��ƴ�. ������ ����
#include<iostream>
using namespace std;

int C[11];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int s, n, a;	// 5, 9
	cin >> s >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;

		int pos = -1;
		for (int j = 0; j < s; j++) {
			if (C[j] == a)
				pos = j;		//�Է°��� ������ �ߺ��� �Ǵ��� �� �Ⱦ��. �ߺ��� �Ǹ� ���° index�� �ߺ��� �ƴ��� pos�� ��´�.
		}

		//�ߺ� �Ǿ��� ��
		if (pos != -1) {
			for (int k = pos; k >= 1; k--)
				C[k] = C[k - 1];
		}
		else {	//�ߺ����� �ʾ��� ��
			for (int k = s-1; k >= 1; k--)
				C[k] = C[k - 1];
		}		
		C[0] = a;
	}
	
	for (int i = 0; i < s; i++) {
		cout << C[i] << " ";
	}


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

	int s, n, a;	// 5, 9
	cin >> s >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		for (int j = 0; j < s; j++) {
			//�ߺ� �Ǿ��� ��
			if (C[j] == a) {
				for (int k = j; k >= 1; k--) {
					C[k] = C[k - 1];
				}
			}
			else {	//�ߺ����� �ʾ��� ��
				for (int k = s-1; k >= 1; k--) {
					C[k] = C[k - 1];
				}
			}
		}
		C[0] = a;
	}

	for (int i = 0; i < s; i++) {
		cout << C[i] << " ";
	}


	return 0;
}
*/
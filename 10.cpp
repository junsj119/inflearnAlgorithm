//10. �ڸ����� ��
#include<iostream>
#include<string>
using namespace std;

int digit_sum(int x) {
	string str = to_string(x);
	int s = 0;
	for (int i = 0; i < str.length(); i++) {
		s += str[i] - '0';
	}
	return s;
}
/*
int digit_sum(int x) {
	int tmp, sum = 0;
	while(x>0){
		tmp = x % 10;
		sum += tmp;
		x = x / 10;
	}
}
x	tmp	  sum
125  5     5
12   2     7
1    1     8
*/
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, input, tmp = 0;
	cin >> n;
	int max = 0;

	for (int i = 0; i < n; i++) {
		cin >> input;

		int sum = digit_sum(input);
		
		if (sum >= max) {		//>= �� ���ְ� else if�� ���ָ� testcase �� 1���� �߲ٳ���. �� 96 555 �ΰ��� ���� �� 555�� ���� ������ 96�� ���͵� tmp�� 96���� �ٲ��.
			tmp = input;
			max = sum;
		}
		else if (sum == max) {
			if (input > tmp)
				tmp = input;
		}
	}
	cout << tmp;

	return 0;
}

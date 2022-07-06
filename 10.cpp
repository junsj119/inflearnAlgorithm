//10. 자릿수의 합
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
		
		if (sum >= max) {		//>= 로 해주고 else if로 해주면 testcase 중 1개가 삐꾸난다. 아 96 555 두개가 있을 때 555가 먼저 들어오고 96이 들어와도 tmp가 96으로 바뀐다.
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

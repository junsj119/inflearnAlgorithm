//53. k���� ���
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int stack[100], top = -1;

void push(int x) {
	stack[++top] = x;
}
int pop() {
	return stack[top--];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;		// 11 2
	char str[20] = "0123456789ABCDEF";		// 2, 5, 8 16���� ������ �س��Ҵ�.

	while (n > 0) {
		push(n % k);			//1 1 0 1
		n = n / k;
	}
	while (top != -1) {
		cout << str[pop()];
	}
	/*		�̷������� �� �� �ִ�.
		while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
	*/
	return 0;

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
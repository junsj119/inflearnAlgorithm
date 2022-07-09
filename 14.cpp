//14. 뒤집은 소수
#include<iostream>
#include<string>
using namespace std;
//뒤집는 함수
int reverse(int x) {
	/*
	string s = to_string(x);
	reverse(s.begin(), s.end());

	while (1) {
		int i = 0;
		if (s[i] == 0)
			s.erase(i, 1);
		else
			break;
		i++;
	}
	return stoi(s);
	*/
	int res = 0, tmp;
	while (x > 0) {
		tmp = x % 10;
		res = res * 10 + tmp;
		x = x / 10;
	}
	return res;
}
//소수인지 확인하는 함수
bool isPrime(int x) {
	int cnt = 0;
	for (int i = 1; i <= x; i++) {
		if (x % i == 0)
			cnt++;
		if (cnt == 3) 
			return false;
	}
	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n, num;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;

		int revNum = reverse(num);

		if (!isPrime(revNum))
			continue;
		if (revNum == 1)
			continue;
		cout << revNum << " ";
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



	return 0;
}
*/
//6. 숫자만 추출

#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str, tmp;
	cin >> str;

	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 48 && str[i] <= 57)
			tmp += str[i];
	}

	int iTmp = stoi(tmp);

	int cnt = 0;
	for (int j = 1; j <= iTmp; j++)
	{
		if (iTmp % j == 0)
			cnt++;
	}
	cout << stoi(tmp) << "\n";
	cout << cnt;

	return 0;
}
/*
#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	//freopen("input.txt", "rt", stdin);
	char a[100];
	int res = 0, cnt = 0;
	cin >> a;
	for (int i = 0; a[i] != '\0';i++) {
		if (a[i] >= 48 && a[i] <= 57) {
			res = res * 10 + (a[i] - 48);
		}
	}
	cout << res << '\n';
	for (int j = 1; j <= res; j++) {
		if (res % j == 0) cnt++;
	}
	cout << cnt;
	return 0;
}*/
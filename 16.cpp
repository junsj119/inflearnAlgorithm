//16. Anagram
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int a[53];
int b[53];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	
	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (isupper(str[i]))
			a[str[i] - 65]++;
		else
			a[str[i] - 97 + 26]++;		//0~25 대문자 26~ 소문자
	}

	cin >> str;
	for (int i = 0; i < str.length(); i++) {
		if (isupper(str[i]))
			b[str[i] - 65]++;
		else
			b[str[i] - 97 + 26]++;		//0~25 대문자 26~ 소문자
	}

	for (int i = 0; i < 52; i++) {
		if (a[i] != b[i]) {
			cout << "NO";
			exit(0);
		}
	}
	cout << "YES";

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
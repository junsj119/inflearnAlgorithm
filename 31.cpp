//31. 탄화수소 질량
#include<iostream>
#include<string>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s, s_Tmp1, s_Tmp2;
	cin >> s;
	int tmp = 0, i;

	for (i = 1; i < s.length(); i++) {
		if (s[i] - '0' >= 0 && 9 >= s[i] - '0')
			s_Tmp1 += s[i];
		else
			break;
	}
	if (s_Tmp1 == "")
		tmp = 12;
	else
		tmp = stoi(s_Tmp1) * 12;

	for (int j = i + 1; j < s.length(); j++) {
		if (s[j] - '0' >= 0 && 9 >= s[j] - '0')
			s_Tmp2 += s[j];
	}

	if (s_Tmp2 == "")
		tmp += 1;
	else
		tmp += stoi(s_Tmp2);

	cout << tmp;


	return 0;
}
//	if (s[1] - '0' >= 0 && 9 >= s[1] - '0')
/*
#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

		string a;
	int c = 0, h = 0, pos, i;
	cin >> a;

	if (a[1] == 'H') {
		c = 1;
		pos = 1;
	}
	else {
		for (i = 1; a[i] != 'H'; i++) {
			c = c * 10 + (a[i] - '0');
		}
		pos = i;
	}

	if (a[pos + 1] == '\0') h == 1;
	else {
		for (i = pos + 1; a[i] != '\0'; i++) {
			h = h * 10 + (a[i] - '0');
		}
	}
	cout << c * 12 + h;


	return 0;
}
*/
//7. 영어단어 복구
#include<iostream>
#include<string>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str;
	getline(cin, str);

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == ' ')
		{
			str.erase(i, 1);
			i--;
		}
		if (str[i] >= 65 && str[i] <= 90) {
			str[i] = tolower(str[i]);
		}
	}
	cout << str;

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
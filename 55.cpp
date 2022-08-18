//55. 기차운행
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

stack<int>s;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, j = 1;
	cin >> n;

	vector<char>str;

	for (int i = 1; i <= n; i++) {
		cin >> m;
		s.push(m);
		str.push_back('P');

		while (1) {
			if (s.empty())
				break;

			if (j == s.top()) {
				s.pop();
				j++;
				str.push_back('O');
			}
			else
				break;
		}
	}

	if (!s.empty()) {
		cout << "impossible";
	}
	else {
		for (int i = 0; i < str.size(); i++)
			cout << str[i];
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
//8. ¿Ã¹Ù¸¥ °ýÈ£
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<char>st;

	string str;
	cin >> str;

	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(')
			st.push('(');
		if (st.top() == '(' && str[i] == ')')
			st.pop();
	}
	if (st.empty())
		cout << "YES";
	else
		cout << "NO";
		
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

	freopen("input.txt", "rt", stdin);
	char a[100];
	int cnt = 0;
	cout << a;
	for (int i = 0; a[i] != '\0'; i++) {
		if (a[i] == '(') cnt++;
		else if (a[i] == ')') cnt--;
		if (cnt < 0) break;
	}
	if (cnt == 0)
		cout << "YES";
	else
		cout << "NO";

	return 0;
}
*/
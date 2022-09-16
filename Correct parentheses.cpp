//¿Ã¹Ù¸¥ °ýÈ£
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;
stack<int>st;

bool solution(string s) {
	bool answer = true;

	for (int i = 0; i < s.length(); i++) {	
		if (st.empty() && s[i] == ')')
			return false;
		else if (s[i] == '(')
			st.push('(');
		else if (st.top() == '(' && s[i] == ')')
			st.pop();
	}
	if (st.empty())
		return true;

}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s = "(())()";

	cout << solution(s);
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
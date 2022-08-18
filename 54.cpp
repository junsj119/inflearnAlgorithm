//54. ¿Ã¹Ù¸¥ °ýÈ£
#include<iostream>
#include<vector>
#include<stack>
#include<algorithm>
using namespace std;

stack<int>st;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	cin >> str;


	for (int i = 0; i < str.length(); i++) {
		if (str[i] == '(')
			st.push('(');
		else {	// ´Ý´Â °ýÈ£ÀÏ ¶§
			if (st.empty()) {
				cout << "NO";
				return 0;
			}
			else// if (st.top() == '(')
				st.pop();
		}
		
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



	return 0;
}
*/
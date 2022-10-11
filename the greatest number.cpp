//���� ū ��
//@@@��α� �����ߴ�.@@@
//@@@�ؿ��� ���� ó���� Ǭ ���, ������ �ƿ� �߸��ߴ�.@@@
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include <sstream>
#include<queue>
#include<algorithm>
using namespace std;


//��ģ ���� ���ؼ� ū������ �����ϱ�, ex ) 6, 10 �� �ִٸ� 610�� 106�ϰ� ��� ū�� ��
// 610�� ��ũ�Ƿ� 6, 10������ �����ϰ� �ȴ�.
bool cmp(string a, string b) {
	return a + b > b + a;
}

string solution(vector<int> numbers) {
	string answer = "";
	vector<string> temp;

	for (int num : numbers)
		temp.push_back(to_string(num));

	sort(temp.begin(), temp.end(), cmp);

	//ó�� ���ڰ� 0�̶�� 0�� ��ȯ
	if (temp.at(0) == "0")        
		return "0";

	for (auto num : temp)
		answer += num;
	return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int>numbers;
	numbers.assign({ 6, 10, 2 });

	cout << solution(numbers);

	return 0;
}

/*
#include<iostream>
using namespace std;

string solution(vector<int> numbers) {
	string answer = "";
	vector<int> vec;
	for (int i = 0; i < numbers.size(); i++) {
		string s = to_string(numbers[i]);

		if (s.length() == 1) {
			vec.push_back(stoi(s));
		}
		else {
			for (int j = 0; j < s.length(); j++) {
				int tmp = s[j] - '0';
				vec.push_back(tmp);
			}
		}
	}
	sort(vec.begin(), vec.end(), greater<>());

	/*
	stringstream ss;
	copy(vec.begin(), vec.end(), ostream_iterator<int>(ss)); // ���� �Ϸ��� ss �ڿ�  ," " �ϸ� �ȴ�.

	answer = ss.str();

	stringstream ss;
	for (auto it = vec.begin(); it != vec.end(); it++) {
		if (it != vec.begin()) {
			ss;
		}
		ss << *it;
	}
	answer = ss.str();
	return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	return 0;
}
*/
//가장 큰 수
//@@@블로그 참고했다.@@@
//@@@밑에는 내가 처음에 푼 방식, 접근을 아예 잘못했다.@@@
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include <sstream>
#include<queue>
#include<algorithm>
using namespace std;


//합친 문자 비교해서 큰순으로 정렬하기, ex ) 6, 10 이 있다면 610과 106하고 어떤게 큰지 비교
// 610이 더크므로 6, 10순으로 정렬하게 된다.
bool cmp(string a, string b) {
	return a + b > b + a;
}

string solution(vector<int> numbers) {
	string answer = "";
	vector<string> temp;

	for (int num : numbers)
		temp.push_back(to_string(num));

	sort(temp.begin(), temp.end(), cmp);

	//처음 숫자가 0이라면 0을 반환
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
	copy(vec.begin(), vec.end(), ostream_iterator<int>(ss)); // 띄어쓰기 하려면 ss 뒤에  ," " 하면 된다.

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
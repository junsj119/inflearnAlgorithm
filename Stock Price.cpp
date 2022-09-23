//
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;

vector<int> solution(vector<int>prices) {
	vector<int>answer(prices.size());
	int tmp = prices.size() - 1;

	for (int i = 0; i < prices.size(); i++) {
		for (int j = i + 1; j < prices.size(); j++) {
			answer[i]++;

			if (prices[i] > prices[j]) 
				break;
		}

	}
	return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int>prices;
	prices.assign({ 1, 2, 3, 2, 3 });

	vector<int> vec = solution(prices);
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i] << " ";

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
	
	vector<int> solution(vector<int> prices) {
	vector<int> answer(prices.size());
	stack<int> s;
	int size = prices.size(); // 계속 size를 계산하는 것보다 상수값으로 저장하면 전체 함수 처리 시간 감소

	for (int i = 0; i < size; ++i){
		while (!s.empty() && prices[s.top()] > prices[i]){ // 가격이 줄어들었다면
			answer[s.top()] = i - s.top(); // 현재 시간 - 당시 시간
			s.pop();
		}
		s.push(i);
	}
	while (!s.empty()){
		answer[s.top()] = size - 1 - s.top(); // 종료 시간 - 당시 시간
		s.pop();
	}

	return answer;
}

	return 0;
}
*/
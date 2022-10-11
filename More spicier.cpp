//더 맵게
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;

int solution(vector<int> scoville, int k) {
	int answer = 0;
	priority_queue<int, vector<int>, greater<int>>pq;	// 오름차순, 디폴트는 내림차순

	for (int i = 0; i < scoville.size(); i++) {
		pq.push(scoville[i]);
	}

	while (pq.size() > 1 && pq.top() < k) {
		int first = pq.top();
		pq.pop();
		int second = pq.top() * 2;
		pq.pop();

		int sum = first + second;
		pq.push(sum);

		answer++;
	}

	if (pq.top() < k)
		return -1;

	return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<int>scoville;
	int k = 7;
	scoville.assign({ 1, 2, 3, 9, 10, 12 });

	cout << solution(scoville, k);

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
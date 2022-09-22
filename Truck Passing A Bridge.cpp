//다리를 지나는 트럭
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights) {
	int answer = 0;
	int size = truck_weights.size();
	int idx = 0, sum = 0;
	queue<int>q;

	while (1) {
		//마지막 트럭
		if (idx == truck_weights.size()) {
			answer += bridge_length;
			break;
		}

		answer++;
		int tmp = truck_weights[idx];

		//차가 다리를 다 건넜을 경우
		if (q.size() == bridge_length) {
			sum -= q.front();
			q.pop();
		}

		if (sum + tmp <= weight) {
			sum += tmp;
			q.push(tmp);
			idx++;
		}
		else {
			q.push(0);
		}
	}
	return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	vector<int> truck_weights;

	int bridge_length = 2;
	int weight = 10;

	truck_weights.assign({ 7, 4, 5, 6 });

	cout << solution(bridge_length, weight, truck_weights);
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
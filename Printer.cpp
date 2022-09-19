//«¡∏∞≈Õ
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;

vector<int>priorities;
priority_queue<int>pq;
queue<pair<int, int>>q;

int solution(vector<int>priorities, int location) {
	int answer = 0, count = 0;

	for (int i = 0; i < priorities.size(); i++) {
		pq.push(priorities[i]);
		q.push(make_pair(i, priorities[i]));
	}

    while (!q.empty()) {
        int idx = q.front().first;
        int value = q.front().second;
        q.pop();

        if (pq.top() == value) {
            pq.pop();
            count++;

            if (idx == location) {
                answer = count;
                break;
            }
        }
		else
            q.push(make_pair(idx, value));
    }

	return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	priorities.assign({ 2, 1, 3, 2 });
	int location = 2;

	cout << solution(priorities, location);

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
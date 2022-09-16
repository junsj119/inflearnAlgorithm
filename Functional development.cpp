//기능 개발
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

vector<int>progresses;
vector<int>speeds;
/*
  1. counting 때문에 while문 두 개를 사용
  2. 100이 넘어가면 counting++ 해준 후 배열 삭제
  3. counting이 0 이상이면 answer 배열에 저장
  4. speed만큼 progresses에 더해준다.
*/
vector<int> solution(vector<int> progresses, vector<int> speeds) {
    vector<int> answer;
    int counting;

    while (progresses.size() > 0) {
        counting = 0;
        while (progresses.size() > 0) {
            if (progresses[0] >= 100) {
                counting++;
                progresses.erase(progresses.begin());
                speeds.erase(speeds.begin());
            }
            else {
                break;
            }
        }
        if (counting > 0)
            answer.push_back(counting);
        for (int i = 0; i < progresses.size(); i++) {
            progresses[i] += speeds[i];
        }
    }

    return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    progresses.assign({ 93, 30, 55 });
    speeds.assign({ 1, 30, 5 });

    vector<int> vec = solution(progresses, speeds);

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

	return 0;
}
*/
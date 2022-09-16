//��� ����
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

vector<int>progresses;
vector<int>speeds;
/*
  1. counting ������ while�� �� ���� ���
  2. 100�� �Ѿ�� counting++ ���� �� �迭 ����
  3. counting�� 0 �̻��̸� answer �迭�� ����
  4. speed��ŭ progresses�� �����ش�.
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
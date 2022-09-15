//위장
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;

int solution(vector<vector<string>>clothes) {
	//1. 옷을 종류별로 구분한다.
	unordered_map<string, int>map;
	for (vector<string>cloth : clothes)		//0번째 yellow_hat 1번째 headgear 이런식으로 쌓이는데 옷의 종류가 중요하기 때문에 1번째로 맞춰놓고 ++을 한다.
		map[cloth[1]]++;
	
	//2. 입지 않는 경우를 고려해서 모든 조합 계산한다.
	int answer = 1;
	for (auto it = map.begin(); it != map.end(); it++)
		answer *= it->second + 1;	//입지 않는 경우를 생각.

	//3. 아무 종류의 옷도 입지 않는 경우 제외한다.
	return answer -1;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	vector<vector<string>>clothes = {{"yellow_hat", "headgear"},
									{"blue_sunglasses", "eyewear"},
									{"green_turban", "headgear"}};

	cout << solution(clothes);
}
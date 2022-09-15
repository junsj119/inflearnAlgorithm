//����
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
#include<unordered_map>
using namespace std;

int solution(vector<vector<string>>clothes) {
	//1. ���� �������� �����Ѵ�.
	unordered_map<string, int>map;
	for (vector<string>cloth : clothes)		//0��° yellow_hat 1��° headgear �̷������� ���̴µ� ���� ������ �߿��ϱ� ������ 1��°�� ������� ++�� �Ѵ�.
		map[cloth[1]]++;
	
	//2. ���� �ʴ� ��츦 ����ؼ� ��� ���� ����Ѵ�.
	int answer = 1;
	for (auto it = map.begin(); it != map.end(); it++)
		answer *= it->second + 1;	//���� �ʴ� ��츦 ����.

	//3. �ƹ� ������ �ʵ� ���� �ʴ� ��� �����Ѵ�.
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
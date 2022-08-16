//49. 블록의 최댓값
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, sum = 0;
	cin >> n;
	vector<int>front(n);
	vector<int>right(n);
	vector<vector<int>>vec(n, vector<int>(n, 0));

	for (int i = 0; i < n; i++)
		cin >> front[i];
	

	//정면에서 본 값으로 다 초기화
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			vec[i][j] = front[j];
		}
	}

	//오른쪽에서 본 값이랑 비교 후 크면 빼주기		빼주기 말고 right[i]로 바꿔주는 방법이 있다.!!
	for (int i = 0; i < n; i++) {
		cin >> right[i];
		for (int j = 0; j < n; j++) {
			if (vec[i][j] > right[i]) {
				while (vec[i][j] != right[i])
					vec[i][j]--;
			}
			sum += vec[i][j];
		}
	}
	cout << sum;
	

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
//25. 석차 구하기
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, input;
	cin >> n;
	vector<int>vec(n);
	vector<int>vec2(n, 1);

	for (int i = 0; i < n; i++)
		cin >> vec[i];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (vec[i] < vec[j])
				vec2[i]++;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << vec2[i] << " ";
	}
	


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
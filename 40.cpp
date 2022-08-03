//40. 교집합(투포인터 알고리즘) 이분탐색 binarysearch로 찾으면 되지 않나?
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n;
	vector<int> vec1(n);
	for (int i = 0; i < n; i++)
		cin >> vec1[i];
	sort(vec1.begin(), vec1.end());

	cin >> m;
	vector<int> vec2(m);
	vector<int> vec3(n + m);
	for (int i = 0; i < m; i++)
		cin >> vec2[i];
	sort(vec2.begin(), vec2.end());
	int z = 0;
	for (int i = 0; i < n; i++) {
		if (binary_search(vec2.begin(), vec2.end(), vec1[i])) {
			vec3[z] = vec1[i];
			z++;
		}
	}
	for (int i = 0; i < vec3.size(); i++) {
		if (vec3[i] == 0)
			exit(0);
		cout << vec3[i] << " ";
	}

	return 0;
}

/*
#include<iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(fals e);
	cin.tie(NULL);
	cout.tie(NULL);

		int n, m;
	cin >> n;
	vector<int> vec1(n);
	for (int i = 0; i < n; i++)
		cin >> vec1[i];
	sort(vec1.begin(), vec1.end());

	cin >> m;
	vector<int> vec2(m);
	for (int i = 0; i < m; i++)
		cin >> vec2[i];
	sort(vec2.begin(), vec2.end());

	int p1 = 0, p2 = 0, p3 = 0;
	vector<int> vec3(n+m);
	while (1) {
		//끝났을 때
		if (p1 > n - 1 || p2 > m - 1)
			break;

		if (vec1[p1] == vec2[p2]) {
			vec3[p3] = vec1[p1];
			p1++; p2++; p3++;
		}
		else if (vec1[p1] > vec2[p2]) {
			p2++;
		}
		else if (vec1[p1] < vec2[p2]) {
			p1++;
		}
	}

	for (int i = 0; i < vec3.size(); i++) {
		if (vec3[i] == 0)
			exit(0);
		cout << vec3[i] << " ";
	}


	return 0;
}
*/
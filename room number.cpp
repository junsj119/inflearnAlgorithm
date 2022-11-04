//1475 ¹æ¹øÈ£
#include<iostream>
#include <sstream>
#include<vector>
#include<stack>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string n;
	cin >> n;

	vector<int>vec(10, 0);

	for (int i = 0; i < n.length(); i++)
		vec[n[i] - 48]++;
	
	int sixnine = (vec[6] + vec[9] + 1) / 2;
	vec[6] = vec[9] = sixnine;

	int m = 0;
	for (int i = 0; i < 10; i++) {
		if (vec[m] < vec[i]) 
			m = i;
	}

	cout << vec[m] << "\n";
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
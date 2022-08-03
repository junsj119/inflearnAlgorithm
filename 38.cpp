//38. Inversion Sequence
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;	//8
	cin >> n;
	vector<int>is(n+1);
	vector<int>os(n+1);

	for (int i = 0; i < n; i++)
		cin >> is[i];						// 5, 3, 4, 0, 2, 1, 1, 0

	for (int i = n-1; i >= 0; i--) {
		int tmp = i;
		for (int j = 1; j <= is[i]; j++) {
			os[tmp] = os[tmp + 1];
			tmp++;
		}
		os[tmp] = i+1;
	}
	
	for (int i = 0; i < n; i++)
		cout << os[i] << " ";
	
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
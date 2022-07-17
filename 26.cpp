//26. ∏∂∂Û≈Ê
#include<iostream>
#include<vector>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, cnt;
	cin >> n;
	vector<int>vec(n);

	for (int i = 0; i < n; i++)
		cin >> vec[i];
	

	cout << 1 << " ";
	for (int i = 1; i < n; i++) {
		cnt = 0;
		for (int j = i - 1; j >= 0;j--) {
			if (vec[j] >= vec[i]) cnt++;
		}
		cout << cnt + 1 << " ";
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
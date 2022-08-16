//50. 영지 선택
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int h, w, a, b, max = -210000000;
	cin >> h >> w;
	vector<vector<int>>vec(h, vector<int>(w));

	for (int i = 0; i < h; i++) {
		for (int j = 0; j < w; j++) {
			cin >> vec[i][j];
		}
	}

	cin >> a >> b;

	for (int i = 0; i < h-a; i++) {				// 6
		for (int j = 0; j < w-b; j++) {			// 7
			int sum = 0;
			for (int z = i; z < i+a; z++) {		// 2
				for (int x = j; x < j+b; x++) {	// 3
					sum += vec[z][x];
				}
			}
			if (sum > max)
				max = sum;
		}
	}

	cout << max;

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
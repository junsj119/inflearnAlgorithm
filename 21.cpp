//21. 카드게임
#include<iostream>
using namespace std;

int a[11];
int b[11];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int aScore = 0, bScore = 0, lw;

	for (int i = 0; i < 10; i++)
		cin >> a[i];

	for (int i = 0; i < 10; i++)
		cin >> b[i];

	for (int i = 0; i < 10; i++) {

		if (a[i] > b[i])
		{
			aScore += 3;
			lw = 1;
		}
		else if(a[i] < b[i])
		{
			bScore += 3;
			lw = 2;
		}
		else
		{
			aScore++;
			bScore++;
		}

	}

	cout << aScore << " " <<  bScore << endl;

	if (aScore == bScore) {
		if (lw == 0) cout << "D";
		else if (lw == 1) cout << "A";
		else cout << "B";
	}
	else if (aScore > bScore)
		cout << "A";
	else
		cout << "B";


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
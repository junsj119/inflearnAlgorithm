//37. Least Recently Used(삽입정렬 코드 스타일:카카오 캐시 문제 변형)
//아래껀 내가 푼 것, 잘못됐다. 위에껄 보자
#include<iostream>
using namespace std;

int C[11];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int s, n, a;	// 5, 9
	cin >> s >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;

		int pos = -1;
		for (int j = 0; j < s; j++) {
			if (C[j] == a)
				pos = j;		//입력값이 들어오면 중복이 되는지 쭉 훑어본다. 중복이 되면 몇번째 index가 중복이 됐는지 pos에 답는다.
		}

		//중복 되었을 때
		if (pos != -1) {
			for (int k = pos; k >= 1; k--)
				C[k] = C[k - 1];
		}
		else {	//중복되지 않았을 때
			for (int k = s-1; k >= 1; k--)
				C[k] = C[k - 1];
		}		
		C[0] = a;
	}
	
	for (int i = 0; i < s; i++) {
		cout << C[i] << " ";
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

	int s, n, a;	// 5, 9
	cin >> s >> n;

	for (int i = 0; i < n; i++) {
		cin >> a;
		for (int j = 0; j < s; j++) {
			//중복 되었을 때
			if (C[j] == a) {
				for (int k = j; k >= 1; k--) {
					C[k] = C[k - 1];
				}
			}
			else {	//중복되지 않았을 때
				for (int k = s-1; k >= 1; k--) {
					C[k] = C[k - 1];
				}
			}
		}
		C[0] = a;
	}

	for (int i = 0; i < s; i++) {
		cout << C[i] << " ";
	}


	return 0;
}
*/
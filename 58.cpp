/*		DFS - 깊이우선탐색
*				  1
*			2			3
*		4		5    6		7
* 
전위순회 출력 - 1 2 4 5 3 6 7
중위순회 출력 - 4 2 5 1 6 3 7 
후위순회 출력 - 4 5 2 6 7 3 1
*/

//
#include<iostream>
#include<vector>
#include<stack>
#include<string>
#include<algorithm>
using namespace std;

void D(int v) {
	if (v > 7)
		return;
	else {
		//여기에 출력문을 넣으면 전위순회
		D(v * 2);
		//여기에 출력문을 넣으면 중위순회
		D(v * 2 + 1);
		//여기에 출력문을 넣으면 후위순회
	}
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	D(1);

	return 0;
}

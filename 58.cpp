/*		DFS - ���̿켱Ž��
*				  1
*			2			3
*		4		5    6		7
* 
������ȸ ��� - 1 2 4 5 3 6 7
������ȸ ��� - 4 2 5 1 6 3 7 
������ȸ ��� - 4 5 2 6 7 3 1
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
		//���⿡ ��¹��� ������ ������ȸ
		D(v * 2);
		//���⿡ ��¹��� ������ ������ȸ
		D(v * 2 + 1);
		//���⿡ ��¹��� ������ ������ȸ
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

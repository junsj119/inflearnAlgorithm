//
#include<iostream>
#include <sstream>
#include<vector>
#include<stack>
#include<string>
#include<queue>
#include<algorithm>
using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = 0;
    vector<int> check(n + 1, 0);

    for (int i : lost)
        check[i]--;
    
    for (int i : reserve)
        check[i]++;
    

    for (int i = 1; i <= n; i++) {
        if (check[i] < 0) {
            //µÞ»ç¶÷ÇÑÅ× ºô¸®±â
            if (check[i - 1] == 1) {
                check[i]++;
                check[i - 1]--;
            }
            //¾Õ»ç¶÷ÇÑÅ× ºô¸®±â
            else if (check[i + 1] == 1) {
                check[i]++;
                check[i + 1]--;
            }
        }
    }

    for (int i : check) {
        if (check[i] >= 0)
            answer++;
    }

    return answer;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, vector<int> lost, vector<int> reserve;
	n = 5;
	lost.assign({ 2, 4 });
	reserve.assign({ 1, 3, 5 });

	cout << solution(n, lost, reserve);

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
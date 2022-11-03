#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int m;
        cin >> m;

        int cnt = 0;
        for (int i = 1; i <= m; i++) {
            if (m % i == 0)
                cnt++;
        }
        if (cnt == 2)
            ans++;
    }
    cout << ans;
    return 0;
}
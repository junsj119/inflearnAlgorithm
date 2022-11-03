#include<iostream>
using namespace std;

int main() {
    int sum = 0, max = 0;

    for (int i = 0; i < 4; i++) {
        int x, y;
        cin >> x >> y;

        sum += y;
        sum -= x;

        if (sum > max)
            max = sum;
    }
    cout << max;
    return 0;
}
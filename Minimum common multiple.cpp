#include<iostream>
using namespace std;

//최소공배수
int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x, y;
        cin >> x >> y;

        for (int j = x; j > 0; j--) {
            if (x % j == 0 && y % j == 0) {
                cout << x * (y / j) << "\n";
                break;
            }
        }
    }

    return 0;
}

//최대공약수
int gcd(int a, int b)
{
    int c;
    while (b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    return a;
}
int lcm(int a, b)
{
    return a * b / gcd(a, b);
}

#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double a;
    cin >> a;
    cout.precision(2);
    cout << fixed << a+1.5;
    return 0;
}
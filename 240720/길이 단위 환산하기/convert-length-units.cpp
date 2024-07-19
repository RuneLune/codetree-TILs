#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    double n;
    cin >> n;
    cout.precision(1);
    cout << fixed << n*30.48;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    int arr[101][101];
    int dp[101][101] = {0};
    cin >> n;

    for(int i=1; i<=n; ++i)
        for(int j=1; j<=n; ++j)
            cin>>arr[i][j];
    
    dp[1][1] = arr[1][1];
    for(int i=2; i<=n; ++i)
    {
        dp[1][i] = dp[1][i-1] + arr[1][i];
        dp[i][1] = dp[i-1][1] + arr[i][1];
    }
    for(int i=2; i<=n; ++i)
        for(int j=2; j<=n; ++j)
            dp[i][j] = max(dp[i-1][j], dp[i][j-1])+arr[i][j];
    cout << dp[n][n];
    return 0;
}
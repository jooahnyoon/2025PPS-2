#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int dp[n + 1];
    dp[1] = 0;

    for(int i = 2; i <= n; ++i){
        dp[i] = dp[i - 1] + 1;
        if(i % 2 == 0){
            if(dp[i / 2] + 1 < dp[i]){
                dp[i] = dp[i / 2] + 1;
            }
        }
        if (i % 3 == 0){
            if(dp[i / 3] + 1 < dp[i]){
                dp[i] = dp[i / 3] + 1;
            }
        }
    }
    cout << dp[n] << endl;
    return 0;
}
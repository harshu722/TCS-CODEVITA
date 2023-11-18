#include <iostream>
#include <vector>
#include <algorithm>

int maxDifference(const std::vector<int>& powers) {
    int N = powers.size();
    std::vector<int> dp(N, 0);
    
    for (int i = N - 1; i >= 0; --i) {
        int sum = 0;
        for (int j = i; j < N; ++j) {
            sum += powers[j];
            int next = (j + 1 < N) ? dp[j + 1] : 0;
            dp[j] = std::max(sum - next, (i > 0) ? dp[j] - powers[i - 1] : dp[j]);
        }
    }
    
    return dp[N - 1];
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> powers(N);
    
    for (int i = 0; i < N; ++i) {
        std::cin >> powers[i];
    }
    
    std::cout << maxDifference(powers) << std::endl;
    
    return 0;
}



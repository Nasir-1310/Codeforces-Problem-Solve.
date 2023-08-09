#include <iostream>
#include <string>

using namespace std;

int minStepsToDivisibleBy25(string num) {
    int n = num.size();

    // Check if the number is already divisible by 25
    if (stoi(num) % 25 == 0) {
        return 0;
    }

    // Iterate from right to left to find the digit to remove
    for (int i = n - 1; i >= 0; i--) {
        // Check if removing the current digit makes the number divisible by 25
        if (num[i] != '0' && num[i] != '5') {
            // Calculate the minimum steps required
            int steps = (n - 1) - i;  // Count of digits to the right that would be removed
            steps += (n - 1 - steps);  // Count of remaining digits to the left

            return steps;
        }
    }

    return -1;  // Should never reach here as the problem guarantees a solution exists
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string num;
        cin >> num;

        int minSteps = minStepsToDivisibleBy25(num);
        cout << minSteps << endl;
    }

    return 0;
}


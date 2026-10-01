#include <bits/stdc++.h>
using namespace std;

// Brute Force Approach
// Time Complexity: O(N^2)
// Space Complexity: O(1)

int maxSubArrBrute(vector<int>& arr) {

    int n = arr.size();
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {

        int sum = 0;

        for (int j = i; j < n; j++) {

            sum += arr[j];

            maxi = max(sum, maxi);
        }
    }

    return maxi;
}


// Optimal Approach - Kadane's Algorithm
// Time Complexity: O(N)
// Space Complexity: O(1)

int maxSubArr(vector<int>& arr) {

    int n = arr.size();

    int ansStart = -1;
    int ansEnd = -1;
    int start = 0;

    int sum = 0;
    int maxi = INT_MIN;

    for (int i = 0; i < n; i++) {

        // Start a new subarray
        if (sum == 0) {
            start = i;
        }

        // Add current element
        sum += arr[i];

        // Update maximum sum
        if (sum > maxi) {

            maxi = sum;

            ansStart = start;
            ansEnd = i;
        }

        // If sum becomes negative,
        // discard the current subarray
        if (sum < 0) {
            sum = 0;
        }
    }

    // Print maximum subarray
    cout << "Maximum Subarray: ";

    for (int i = ansStart; i <= ansEnd; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n";

    return maxi;
}


int main() {

    vector<int> arr = {
        -2, 1, -3, 4, -1, 2, 1, -5, 4
    };

    // Brute Force
    cout << "Brute Force Maximum Sum: "
         << maxSubArrBrute(arr) << "\n";

    // Optimal - Kadane
    cout << "Kadane Maximum Sum: "
         << maxSubArr(arr) << "\n";

    return 0;
}
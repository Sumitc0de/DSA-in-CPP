#include <bits/stdc++.h>
#include <set>
#include <algorithm>
using namespace std;

// Brute force Time Complexity: O(n) Space Complexity: O(N)
// using a temporary array to store non-zero elements and then filling the rest with zeros

int moveZerosToEndBruteForce(vector<int>& arr) {
    int n = arr.size();
    vector<int> temp(n, 0);  // Temporary array initialized with zeros
    int index = 0;  // Index for the temporary array

    // Store non-zero elements in the temporary array
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            temp[index++] = arr[i];
        }
    }

    // Copy the temporary array back to the original array
    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";  // Print each element of the modified array
    }
}

// Optimal Time Complexity: O(n) Space Complexity: O(1)
int moveZerosToEnd(vector<int>& arr) {
    int n = arr.size();
    int count = 0;  // Count of non-zero elements
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i];  // Move non-zero element to the front
        }
    }
    
    // Fill the remaining positions with zeros
    while (count < n) {
        arr[count++] = 0;
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";  // Print each element of the modified array
    }
}


// Two pointer approach Time Complexity: O(n) Space Complexity: O(1)
int moveZerosToEndTwoPointer(vector<int>& arr) {
    int n = arr.size();
    int left = 0;  // Pointer for the position of the next non-zero element

    if(left >= n) return 0;  // Edge case: if the array is empty
    
    for (int right = 0; right < n; right++) {
        if (arr[right] != 0) {
            swap(arr[left], arr[right]);  // Swap non-zero element to the front
            left++;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";  // Print each element of the modified array
    }
}



int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // Write code here
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        // cout << moveZerosToEndBruteForce(arr) << "\n";
        cout << moveZerosToEndTwoPointer(arr) << "\n";
        // cout << moveZerosToEnd(arr) << "\n";
        
    }

    return 0;
}

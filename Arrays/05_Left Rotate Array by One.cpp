#include <bits/stdc++.h>
#include <set>
using namespace std;

// Brute force Time Complexity: O(n) Space Complexity: O(N)
int leftRotateByOne(vector<int>& arr)
{
    int n = arr.size();
    int temp[n];

    // Shift the elements to the left by one position
    for (int i = 1; i < n; i++) {
        temp[i - 1] = arr[i];
    }
    temp[n - 1] = arr[0];  // The first element moves to the last position

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        cout << temp[i] << " ";  // Print each element of the rotated array
    }
    cout << endl;
}

// Optimal Time Complexity: O(n) Space Complexity: O(1)
int optimalLeftRotateByOne(vector<int>& arr) {
    int n = arr.size();
    if (n == 0) return 0; // Handle empty array case

    int firstElement = arr[0]; // Store the first element

    // Shift the elements to the left by one position
    for (int i = 1; i < n; i++) {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = firstElement; // Place the first element at the last position

    // Print the rotated array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";  // Print each element of the rotated array
    }
    cout << endl;
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


        // cout << optimalLeftRotateByOne(arr) << "\n";
        cout << leftRotateByOne(arr) << "\n";
        
    }

    return 0;
}

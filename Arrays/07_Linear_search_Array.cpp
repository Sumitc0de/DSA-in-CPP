#include <bits/stdc++.h>
#include <vector>
using namespace std;

// brute force Time Complexity: O(n) Space Complexity: O(1)
// Function to perform linear search on the array
int linearSearch(vector<int>& arr, int target){
   int n = arr.size();
   for(int i = 0; i < n; i++){
         if(arr[i] == target)
                return i;  // Return the index of the target element
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

        cout << linearSearch(arr,3) << "\n";
        // cout << moveZerosToEnd(arr) << "\n";
        
    }

    return 0;
}

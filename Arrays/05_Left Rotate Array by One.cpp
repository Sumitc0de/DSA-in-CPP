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

int rotateByRightByOne(vector<int>& arr)
{
    int n = arr.size();
    int temp[n];

    // Shift the elements to the right by one position
    for(int i = 0;i < n;i++){
        temp[i+1] = arr[i];
    }
    temp[0] = arr[n-1];

    // Print the rotated array
    for(int i = 0; i < n; i++) {
        cout << temp[i] << " ";  // Print each element of the rotated array
    }
    cout << endl;
}

// Optimal Time Complexity: O(n) Space Complexity: O(1)
int optimalRotateByOne(vector<int>& arr, string direction) {
    
    if(direction == "left"){
        int firstElement = arr[0];
        for(int i = 1; i < arr.size(); i++){
            arr[i-1] = arr[i];
        }
        arr[arr.size()-1] = firstElement;
    }
    else{
        int lastElement = arr[arr.size()-1];
        for(int i = arr.size()-2; i >= 0; i--){
            arr[i+1] = arr[i];
        }
        arr[0] = lastElement;
    }

    //print the rotated array
    for(int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";  // Print each element of the rotated array
    }
    cout << endl;

}


int RotateByK(vector<int>& arr, int k, string direction) {
    int n = arr.size();
    k = k % n;  // Handle k > n
    
    if(direction == "left"){
        int temp[k];
        // Store the first k elements in a temporary array
        for(int i = 0; i < k; i++){
            temp[i] = arr[i];
        }

        // Shift the elements to the left by k positions
        for(int i = k; i < n; i++){
            arr[i-k] = arr[i];
        }

        // Move the first k elements to the end of the array
        for(int i = 0; i < k; i++){
            arr[n - k + i] = temp[i];
        }
    }
    else{
        int temp[k];
        // Store the last k elements in a temporary array
        for(int i = 0; i < k; i++){
            temp[i] = arr[n - k + i];
        }

        // Shift the elements to the right by k positions
        for(int i = n - 1; i >= k; i--){
            arr[i] = arr[i - k];
        }

        // Move the last k elements to the beginning of the array
        for(int i = 0; i < k; i++){
            arr[i] = temp[i];
        }
    }

    //print the rotated array
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";  // Print each element of the rotated array
    }
    cout << endl;
}

int OptimalRotateByK(vector<int>& arr, int k, string direction) {
    int n = arr.size();
    k = k % n;  // Handle k > n

    if(direction == "left"){
        reverse(arr.begin(), arr.begin() + k);
        reverse(arr.begin() + k, arr.end());
        reverse(arr.begin(), arr.end());
    }

    // 1 2 3 4  5 6 7 
    else{
        reverse(arr.begin(), arr.end() - k);
        reverse(arr.end() - k, arr.end());
        reverse(arr.begin(), arr.end());


    }

    //print the rotated array
    for(int i = 0; i < n; i++){
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


        // cout << optimalRotateByOne(arr,"right") << "\n";
        // cout << leftRotateByOne(arr) << "\n";
        // cout << rotateByRightByOne(arr) << "\n";
        // cout << RotateByK(arr,3,"right") << "\n";
        cout << OptimalRotateByK(arr,3,"right") << "\n";
        
    }

    return 0;
}

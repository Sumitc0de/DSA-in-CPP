#include <bits/stdc++.h>
using namespace std;

// Brute force approach  T.C => O(NlogN)
int largestElem(vector<int>& arr)
{
    sort(arr.begin(), arr.end());
    return arr[arr.size() - 1];
}


// Optimal approach   T.C => (N)  S.C => O(1)
int largestElement(vector<int>& arr){
    int largest = arr[0];
    // int largest = INT_MIN;  // extra constants use not required but can be used

    for(int i=0;i<arr.size();i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }

    return largest;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        // cout << largestElem(arr) << "\n";
        cout << largestElement(arr) << "\n";
        
    }

    return 0;
}
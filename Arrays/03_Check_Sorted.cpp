#include <bits/stdc++.h>
using namespace std;

//brute force approach  T.C => O(N^2)  S.C => O(1)
int isSortedBrute(vector<int>& arr){
    for(int i = 0; i < arr.size()-1; i++){
        for(int j = i+1; j < arr.size(); j++){
            if(arr[i] > arr[j]){
                return 0;
            }
        }
    }
    return 1;
}

// optimal approach   T.C => (N)  S.C => O(1)
int isSorted(vector<int>& arr){
    for(int i = 1; i < arr.size()-1; i++){
        if(arr[i] > arr[i+1]){
            return 0;
        }
    }
    return 1;
}

int isSrotedNRotated(vector<int>& arr){
    int count = 0;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            count++;
        }
    }

    if(arr[0] < arr[arr.size()-1]){
        count++;
    }

    return (count <= 1);
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

        // cout << isSortedBrute(arr) << "\n";
        cout << isSorted(arr) << "\n";
        cout << isSrotedNRotated(arr) << "\n";
        
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

// Brute force approach  T.C => O(NlogN)   S.C => O(1)
int secondLargest(vector<int>& arr){
    sort(arr.begin(), arr.end());
    int largest = arr.back();

    for(int i=arr.size()-2; i>=0 ;i--){
        if(arr[i] != largest){
            return arr[i];
        }
    }

    return -1;
}

// Optimal approach   T.C => (N)  S.C => O(1)
int secondLargestElem(vector<int>& arr){
    if(arr.size() < 2)
        return -1;

    int largest  = arr[0];
    int slargest = INT_MIN;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }

     if(slargest == INT_MIN)
        return -1;


    return slargest;
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);

        for(int i = 0; i < n; i++)
            cin >> arr[i];

        // cout << secondLargest(arr) << "\n";
        cout << secondLargestElem(arr) << "\n";
        
    }

    return 0;
}

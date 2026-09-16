#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int>& arr, int k, vector<int>& bestSubarray){
    int n = arr.size();
    int maxLen = 0;
    int bestStart = -1, bestEnd = -1;

    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            if(sum == k){
                int currLen = j - i + 1;
                if(currLen > maxLen){
                    maxLen = currLen;
                    bestStart = i;
                    bestEnd = j;
                }
            }
        }
    }

    if(bestStart != -1){
        bestSubarray.assign(arr.begin() + bestStart, arr.begin() + bestEnd + 1);
    }

    return maxLen;
}

int main()
{
    vector<int> arr = {1,1,2,2,3,4,4,5};
    vector<int> bestSubarray;

    int len = longestSubarrayWithSumK(arr, 2, bestSubarray);

    cout << "Length: " << len << "\n";
    cout << "Subarray: ";
    for (int x : bestSubarray) {
        cout << x << " ";
    }
    cout << "\n";

    return 0;
}

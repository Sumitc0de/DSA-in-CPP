#include <bits/stdc++.h>
#include <map>
using namespace std;

// Brute force approach  T.C => O(N^2)   S.C => O(1)
pair<int, int> twoSumBruteForce(vector<int>& arr, int target) {
    int n = arr.size();
    for(int i =0;i<n;i++){
        for(int j = i+1;j<n;j++){
            if(arr[i]+ arr[j] == target){
                return {arr[i],arr[j]};
            }
        }
    }

    return {-1,-1};
}


// Better approach using hashing T.C => O(N)   S.C => O(N)
pair<int,int> twoSumBetter(vector<int>& arr, int target){
    unordered_map<int, int> mp;

    for(int i =0;i<arr.size();i++){
        int comp = target - arr[i];
        if(mp.find(comp) != mp.end()){
            return {comp, arr[i]};
        }
        mp[arr[i]] = i;
    }

    return {-1, -1};
}

// Optimal approach T.C => O(NlogN) for sorting it takes time    S.C => O(N)
// Works by sorting the array and using two pointers
pair<int, int> twoSumOptimal(vector<int>& arr, int target){
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end());

    int start = 0, end = sortedArr.size() - 1;

    while(start < end){
        int sum = sortedArr[start] + sortedArr[end];

        if(sum == target){
            return {sortedArr[start], sortedArr[end]};
        }
        else if(sum < target){
            start++;
        }
        else{
            end--;
        }
    }

    return {-1, -1};
}

int main()
{
    vector<int> arr = {1,1,2,2,3,4,4,5};

    pair<int, int> pot = twoSumOptimal(arr, 6);

    cout << "(" << pot.first << ", " << pot.second << ")" << endl;


    return 0;
}

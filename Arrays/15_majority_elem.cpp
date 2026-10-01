#include <bits/stdc++.h>
#include <map>
using namespace std;

// Brute force appraoch  T.C => O(N^2)  S.C => O(1)
int majorElem(vector<int>& arr){
    int n = arr.size();
    
    for(int i=0;i<n;i++){
        int ct = 0;
        for(int j =0;j<n;j++){
            if(arr[j] == arr[i]){
                ct++;
            }
        }

        if(ct > (n/2)){
            return arr[i];
        }
    }
    
    return -1;
}

// Better approach using hashing T.C => O(N)  S.C => O(N)
int majorElemBetter(vector<int>& arr){
    int n = arr.size();
    unordered_map<int,int> mp;

    // O(NlogN)
    for(int i =0;i<n;i++){
        mp[arr[i]]++;
    }

    //O(N)
    for(auto& pair:mp){
        if(pair.second > n/2){
            return pair.first;
        }
    }


    return -1;


}

// Optimal appraoch T.C => O(N)  S.C => O(1)
int majorElemOptimal(vector<int>& arr){
    int n = arr.size();

    int ct = 0;
    int elem;

    for(int i =0;i<n;i++){
        if(ct == 0){
            ct = 1;
            elem = arr[i];
        }
        else if(arr[i] == elem){
            ct++;
        }
        else{
            ct--;
        }
    }

    int ct1 = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == elem){
            ct1++;
        }
    }

    if(ct1 > (n/2)){
        return elem;
    }


    return -1;
}

int main()
{
    vector<int> arr = {2, 2, 1, 1, 1, 2, 2};

    int elem = majorElemOptimal(arr);

    cout << elem << endl;


    return 0;
}

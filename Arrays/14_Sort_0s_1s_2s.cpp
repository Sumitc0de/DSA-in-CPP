#include <bits/stdc++.h>
using namespace std;


// Brute force approach  T.C => O(N)   S.C => O(1)

// Counting all the 0s, 1s and 2s and then putting them back in the array
int sortArr(vector<int>& arr){
    int n = arr.size();
    int count0 = 0, count1 = 0, count2 = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 0)
            count0++;
        else if(arr[i] == 1)
            count1++;
        else if(arr[i] == 2)
            count2++;
    }
    int index = 0;
    for(int i=0;i<count0;i++){
        arr[index++] = 0;

    }
    for(int i=0;i<count1;i++){
        arr[index++] = 1;
        
    }
    for(int i=0;i<count2;i++){
        arr[index++] = 2;
        
    }

    for(int i =0;i<n;i++){
        cout <<arr[i]<<" ";
    }
    return 0;
}




// Optimal approach
// Dutch National Flag Algorithm  T.C => O(N)   S.C => O(1)
int sortArrOptimal(vector<int>& arr){
    int n = arr.size();
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else if(arr[mid] == 2){
            swap(arr[mid],arr[high]);
            high--;
        }
    }

     for(int i =0;i<n;i++){
        cout <<arr[i]<<" ";
    }
}


int main()
{
    vector<int> arr = {0,1,2,1,0,2,1,0,2};
  

    // cout << sortArr(arr) << "\n";
    cout << sortArrOptimal(arr) << "\n";


    return 0;
}

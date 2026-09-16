#include <iostream>
#include <vector>
using namespace std;
#include<algorithm>

int brutesingleElement(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; i++) {
        int num = arr[i];
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (arr[j] == num) {
                count++;
            }
        }
        if (count == 1) {
            return num;
        }
    }
    return -1; // fallback, shouldn't occur in valid input
}

// Better approach using hashing
// time complexity: O(n)
// space complexity: O(n)
   int getSingleElement(vector<int>& arr) {
        int n = arr.size();

        // Step 1: Find the maximum value in the array
        int maxi = arr[0];
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, arr[i]);
        }

        // Step 2: Declare and initialize hash array of size maxi+1
        vector<int> hash(maxi + 1, 0);

        // Step 3: Count the frequency of each number
        for (int i = 0; i < n; i++) {
            hash[arr[i]]++;
        }

        // Step 4: Find the element that occurs exactly once
        for (int i = 0; i < n; i++) {
            if (hash[arr[i]] == 1)
                return arr[i];
        }

        return -1; // fallback, shouldn't occur in valid input
    }


//optimal approach using XOR
int getSingleElementOptimal(vector<int>& arr) {
    int n = arr.size();
    int result = 0;

    // XOR all elements in the array
    for (int i = 0; i < n; i++) {
        result ^= arr[i];
    }

    return result; // The single number
}

// time complexity: O(n)
// space complexity: O(1)
int main() {
    vector<int> arr = {1,1,2,2,3,4,5};
    int n = arr.size();
   
    // for(int i = 0;i<n;i++){
    //     int num = arr[i];
    //     int count = 0;
    //     for(int j =0;j<n;j++){
    //         if(arr[j] == num){
    //             count++;
    //         }
    //     }
    //     if(count == 1){
    //         cout << num;
    //     }
    // }

    int number = getSingleElement(arr);
    cout << number;

    
    return 0;
}
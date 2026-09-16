#include <iostream>
#include <vector>
using namespace std;
#include<algorithm>


// time complexity: O(n)
// space complexity: O(1)
int main() {
    vector<int> arr = {1,0,1,1,1,1,0,1,0,1,0,1,1};
    int n = arr.size();
    int count = 0;
    int maxi = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == 1){
            count++;
            maxi = max(maxi,count);
        }else{
            count = 0;
        }
    }
    

    cout << maxi;
    return 0;
}
#include <bits/stdc++.h>
#include <map>
using namespace std;

// Optimal approach T.C => O(N)  S.C => O(1)
vector<int> leaders(vector<int>& nums) {
        vector<int> ans;
      int n = nums.size();
      int maxi = INT_MIN;
      for(int i = n -1;i>=0;i--){
        if(nums[i]> maxi){
            ans.push_back(nums[i]);
        }

        maxi = max(nums[i], maxi);
      }

      sort(ans.begin(), ans.end(), greater<int>());
      return ans;
    }

int main()
{
    vector<int> arr = {1, 2, 5, 3, 1, 2};

    vector<int> elem = leaders(arr);


    cout << "Leaders: ";
    for(int i = 0; i < elem.size(); i++) {
        cout << elem[i] << " ";
    }
    cout << endl;


    return 0;
}

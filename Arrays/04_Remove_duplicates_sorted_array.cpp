#include <bits/stdc++.h>
#include <set>
using namespace std;

//brute force 
int removeDuplicates(vector<int>& arr)
{
    set<int> s;

    for(int i = 0; i < arr.size(); i++){
        s.insert(arr[i]);
    }

    int index = 0;
    for(auto it : s){
        arr[index++] = it;
    }

    for(int i = 0; i < index; i++){
        cout << arr[i] << " " ;
    }
    cout << "\n";
    return s.size();
}

int removeDuplicatesOptimal(vector<int>& arr){
    
    int index = 1;

    for(int i = 1; i < arr.size(); i++){
        if(arr[i] != arr[i-1]){
            arr[index++] = arr[i];
        }
    }

    for(int i = 0; i < index; i++){
        cout << arr[i] << " " ;
    }
    cout << "\n";
    return index;
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


        // cout << removeDuplicates(arr) << "\n";
        cout << removeDuplicatesOptimal(arr) << "\n";
        
    }

    return 0;
}

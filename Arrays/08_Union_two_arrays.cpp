#include <bits/stdc++.h>
using namespace std;

// Brute Force
// Time Complexity: O((n + m) * log(n + m))
// Space Complexity: O(n + m)

void bruteForceUnion(vector<int> &arr1, vector<int> &arr2)
{
    set<int> st;

    // Insert elements from arr1
    for (int x : arr1)
    {
        st.insert(x);
    }

    // Insert elements from arr2
    for (int x : arr2)
    {
        st.insert(x);
    }

    // Print union
    for (int x : st)
    {
        cout << x << " ";
    }

    cout << "\n";
}


// Optimal Approach
// Time Complexity: O(n + m)
// Space Complexity: O(n + m)

void optimalUnion(const vector<int>& arr1, const vector<int>& arr2)
{
    int n = arr1.size();
    int m = arr2.size();

    int i = 0;
    int j = 0;

    vector<int> Union;

    // Both arrays should be sorted
    while (i < n && j < m)
    {
        if (arr1[i] < arr2[j])
        {
            if (Union.empty() || Union.back() != arr1[i])
            {
                Union.push_back(arr1[i]);
            }

            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            if (Union.empty() || Union.back() != arr2[j])
            {
                Union.push_back(arr2[j]);
            }

            j++;
        }
        else
        {
            // Both elements are equal
            if (Union.empty() || Union.back() != arr1[i])
            {
                Union.push_back(arr1[i]);
            }

            i++;
            j++;
        }
    }

    // Remaining elements of arr1
    while (i < n)
    {
        if (Union.empty() || Union.back() != arr1[i])
        {
            Union.push_back(arr1[i]);
        }

        i++;
    }

    // Remaining elements of arr2
    while (j < m)
    {
        if (Union.empty() || Union.back() != arr2[j])
        {
            Union.push_back(arr2[j]);
        }

        j++;
    }

    // Print result
    for (int x : Union)
    {
        cout << x << " ";
    }

    cout << "\n";
}


int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--)
    {
        int n1, n2;
        cin >> n1 >> n2;

        vector<int> arr1(n1);
        vector<int> arr2(n2);

        for (int i = 0; i < n1; i++)
        {
            cin >> arr1[i];
        }

        for (int i = 0; i < n2; i++)
        {
            cin >> arr2[i];
        }

        // Brute Force
        // bruteForceUnion(arr1, arr2);

        // Optimal
        optimalUnion(arr1, arr2);
    }

    return 0;
}
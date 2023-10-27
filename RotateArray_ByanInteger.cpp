#include <bits/stdc++.h>
using namespace std;

vector<int> rotateArray(vector<int> arr, int k)
{
    // Write your code here.

    vector<int> ans;

    int s = arr.size();

    for (int i = k; i < s; i++)
    {

        ans.push_back(arr[i]);
    }

    for (int i = 0; i < k; i++)
    {

        ans.push_back(arr[i]);
    }

    for (int i = 0; i < ans.size(); i++)
    {

        cout << ans[i]<<" ";
    }
}

int main()
{

    vector<int> arr = {1, 2, 3, 4, 5};

    rotateArray(arr, 3);

    return 0;
}

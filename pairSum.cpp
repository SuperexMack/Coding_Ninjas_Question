#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pairSum(vector<int> &arr, int s)
{
    sort(arr.begin(), arr.end());

    int sizo = arr.size();

    vector<vector<int>> ans;
    ;

    for (int i = 0; i < sizo; i++)
    {

        for (int j = i + 1; j < sizo; j++)
        {

            if (arr[i] + arr[j] == s)
            {

                vector<int> sec;
                sec.push_back(arr[i]);
                sec.push_back(arr[j]);
                ans.push_back(sec);
            }
        }
    }

    return ans;
}

int main()
{

    vector<int> arr = {1, -6, 2, 5, 1};
    pairSum(arr, 4);
}
// using this code we can find out the element whose occurance is one in whole sorted array and we did it using binary searching


#include<bits/stdc++.h>
using namespace std;


int singleNonDuplicate(vector<int> &arr)
{

    int start = 0;
    int end = arr.size() - 1;

    if (arr.size() == 1)
        return arr[0];
    if (arr[0] != arr[1])
        return arr[0];
    if (arr[end] != arr[end - 1])
        return arr[end];

    while (start <= end)
    {
        int mid = (end + start) / 2;

        if (arr[mid] != arr[mid - 1] && arr[mid] != arr[mid + 1])
            return arr[mid];

        if ((arr[mid + 1] == arr[mid] && mid % 2 != 0) || (arr[mid - 1] == arr[mid] && mid % 2 == 1))
            start = mid + 1;

        else
            end = mid - 1;
    }

    return -1;
}
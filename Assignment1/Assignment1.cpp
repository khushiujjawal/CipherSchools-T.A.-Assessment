#include <bits/stdc++.h>
using namespace std;

// Function to get the missing number
int MissingNo(int nums[], int n)
{
    int count = 0;
    sort(nums, nums + n);
    for (int i = 0; i < n; i++)
    {
        if (nums[i] != count)
        {
            return count;
        }
        count++;
    }
    return count;
}

int main()
{
    int nums[] = {3, 0, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    int miss = MissingNo(nums, n);
    cout << miss << endl;
}

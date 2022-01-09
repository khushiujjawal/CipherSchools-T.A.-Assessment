#include <bits/stdc++.h>
using namespace std;
int Sum(int num[], int target, int n)
{
    int ret;
    int temp = INT_MAX;
    sort(num, num + n);
    for (int i = 0; i < n - 2; i++)
    {
        int j = i + 1;
        int k = n - 1;
        while (j < k)
        {
            int sum = num[i] + num[j] + num[k];
            if (abs(sum - target) < temp)
            {
                ret = sum;
                temp = abs(sum - target);
            }
            if (sum > target)
                k--;
            else
                j++;
        }
    }
    return ret;
}
int main()
{
    int nums[] = {-1, 2, 1, -4};
    int n = sizeof(nums) / sizeof(nums[0]);
    int target = 1;
    int ans = Sum(nums, target, n);
    cout << ans << endl;

    return 0;
}
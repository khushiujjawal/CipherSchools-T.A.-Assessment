#include <iostream>
using namespace std;
int rob(int nums[], int n)
{
    int curr, prev1 = 0, prev2 = 0;

    for (int x = 0; x < n; ++x)
    {
        curr = max(nums[x] + prev2, prev1);
        prev2 = prev1;
        prev1 = curr;
    }
    return curr;
}
int main()
{
    int nums[] = {1, 2, 3, 1};
    int n = sizeof(nums) / sizeof(nums[0]);
    cout << rob(nums, n) << endl;
    return 0;
}
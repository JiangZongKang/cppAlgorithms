#include <iostream>
#include <vector>

class Solution
{
public:
    int search(std::vector<int>& nums, int target)
    {
        // 使用左闭右闭的区间，即左右都可以取得到
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right)
        {
            int mid = left + ((right - left) >> 1);
            if (nums[mid] == target)
            {
                return mid;
            }
            else if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else
            {
                left = mid + 1;
            }
        }
        return -1;
    }
};

int main()
{
    Solution s;
    std::vector<int> nums = {1, 2, 3, 4, 5, 10, 7, 8, 12};
    int target = 12;
    int res = s.search(nums, target);
    std::cout << "target index = " << res << std::endl;
    return 0;
}
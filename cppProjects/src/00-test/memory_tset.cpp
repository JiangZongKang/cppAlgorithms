#include <iostream>
#include <vector>

void test_arr()
{
    int array[2][3] = {{0, 1, 2}, {3, 4, 5}};
    std::cout << "array[0][0] = " << &array[0][0]
              << ", array[0][1] = " << &array[0][1]
              << ", array[0][2] = " << &array[0][2]
              << ", array[1][0] = " << &array[1][0]
              << ", array[1][1] = " << &array[1][1]
              << ", array[1][2] = " << &array[1][2]
              << std::endl;
}

class Solution
{
public:
    int search(std::vector<int>& nums, int target)
    {
        int left = 0;
        // 定义target在闭右区间，即[left, right]
        int right = nums.size() - 1;
        while (left <= right)
        {
            int mid = left + (right - left) / 2;
            if (nums[mid] > target)
            {
                right = mid - 1;
            }
            else if (nums[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                return mid;
            }
        }
        return -1;
    }
};

int main()
{
    test_arr();
    Solution solution;
    std::vector<int> nums = {1, 2, 3, 7, 9, 10};
    int target = 20;
    int res = solution.search(nums, target);
    std::cout << res << std::endl;
    for (int i = 0; i < nums.size(); ++i)
    {
        std::cout << nums[i] << " ";
    }
    return 0;
}

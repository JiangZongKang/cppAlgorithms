#include <iostream>
#include <vector>

class Solution
{
public:
   int removeElement(std::vector<int>& nums, int val) 
   {
    int slowIndex = 0;
    for (int fastIndex = 0; fastIndex < nums.size(); fastIndex++)
    {
        if (val != nums[fastIndex])
        {
            nums[slowIndex++] = nums[fastIndex];
        }
    }
    return slowIndex;
   }

};

int main()
{
    Solution s;
    std::vector<int> nums = {1, 2, 3, 4, 5, 7, 2, 6, 2, 9, 2, 10, 2};
    int res = s.removeElement(nums, 2);
    std::cout << "removed element nums size = " << res << std::endl;

    return 0;
}
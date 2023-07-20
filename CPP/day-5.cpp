// Day04 - 19/7/2023
// Status: Medium
// Title: 347. Top K Frequent Elements
// Link: https://leetcode.com/problems/top-k-frequent-elements/
// Decription

// Given an integer array nums and an integer k, return the k most frequent elements.
// You may return the answer in any order.
// Input: nums = [1,1,1,2,2,3], k = 2
// Output: [1,2]

#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>

class Solution
{
public:
    std::vector<int> topKFrequent(std::vector<int> &nums, int k)
    {
        std::unordered_map<int, int> myMap;
        for (int i = 0; i < nums.size(); i++)
        {
            myMap[nums[i]]++;
        }

        std::vector<std::pair<int, int>> sortedNums;
        for (const auto &entry : myMap)
        {
            sortedNums.push_back(entry);
        }

        // Step 2: Sort the elements based on their frequencies
        std::sort(sortedNums.begin(), sortedNums.end(), [&](const std::pair<int, int> &a, const std::pair<int, int> &b)
                  { return a.second > b.second; });
        // Step 3: Return the result
        std::vector<int> result;
        for (int i = 0; i < k && i < sortedNums.size(); i++)
        {
            result.push_back(sortedNums[i].first);
        }

        return result;
    }
};

int main()
{
    std::vector<int> nums = {1, 1, 1, 2, 2, 3};
    int target = 2;
    Solution sol;
    std::vector<int> res = sol.topKFrequent(nums, target);
    for (int num : res)
    {
        std::cout << num << " ";
    }
}

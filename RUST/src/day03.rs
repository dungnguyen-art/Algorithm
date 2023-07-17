// Day03 - 17/7/2023
// Status: Easy
// Link: https://leetcode.com/problems/two-sum/
// Decription

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
// You may assume that each input would have exactly one solution, and you may not use the same element twice.
// You can return the answer in any order.

// Example 1: Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].

// ---------------------------Solution 1 - Brute Force-------------------------------------
// #include <iostream>
// #include <vector>

// class Solution {
// public:
//     std::vector<int> twoSum(std::vector<int>& nums, int target) {
//         for (int i=0;i<nums.size()-1; i++) {
//             for (int j=i+1;j<nums.size(); j++){
//                 if (nums[i] + nums[j] == target) {
//                     return {i,j};
//                 }
//             }
//         }
//         return {};
//     }
// };

// int main() {
//     std::vector<int> nums = {2,7,11,15};
//     int target = 9;
//     Solution sol;
//     std::vector<int> res = sol.twoSum(nums, target);

// }


impl Solution {
    pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut seen = std::collections::HashMap::new();
        for (i, num) in nums.iter().enumerate() {
            let complement = target - num;
            if seen.contains_key(&complement) {
                return vec![seen[&complement] as i32, i as i32];
            } else {
                seen.insert(num, i);
            }
        }
        Vec::new()
    }
}
struct Solution {}

fn main(){
    let mut nums = vec![2,7,11,15];
    let target = 9;
    let result = Solution::two_sum(nums, target);
    println!("{:?}", result);
}
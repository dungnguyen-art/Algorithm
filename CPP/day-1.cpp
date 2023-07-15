
// Day 1
// Topic - Arrays & Hashing
// Link: https://leetcode.com/problems/contains-duplicate/
// Status: easy

// =========================== Decription =============================================
// Given an integer array nums, return true if any value appears at least twice in the array, 
// and return false if every element is distinct.
// Example 1:

// Input: nums = [1,2,3,1]
// Output: true
// - Aproach 1
// #include<iostream>
// #include<set>
// int main() {
//     int nums[4] = {1,2,3,1};
//     std::set<int> mySet;
//     int len = sizeof(nums)/ sizeof(nums[0]);
//     for (int i=0; i<4; i++) {
//         mySet.insert(nums[i]);
//     }
//     if(mySet.size() < 4){
//         std::cout << true;
//     }
//     else{
//         return false;
//     }
// }

// - Approach 2
#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
  bool containsDuplicate(vector<int>& nums) {
    // sort(nums.begin(), nums.end());
    int n = nums.size();
    set<int> mySet;
    for (int i = 0; i < n; i++) {
        mySet.insert(nums[i]);
    }
    cout << mySet.size();
    if (mySet.size() < n){
        return true;
    }else {
        return false;
    }
  }
};

int main() {
  vector<int> nums = {1,2,3,4};
  Solution sol;
  bool hasDuplicate = sol.containsDuplicate(nums);
  cout << "The vector contains duplicate elements: " << hasDuplicate << endl;
  return 0;
}

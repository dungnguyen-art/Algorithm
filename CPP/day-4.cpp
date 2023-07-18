// Day04 - 18/7/2023
// Status: Medium
// Link: https://leetcode.com/problems/group-anagrams/
// Decription

// Given an array of strings strs, group the anagrams together. 
// You can return the answer in any order.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, 
// typically using all the original letters exactly once.

// Example 1:
// Input: strs = ["eat","tea","tan","ate","nat","bat"]
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]]

#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>
#include<algorithm>
class Solution {
public:
    std::vector<std::vector<std::string>> groupAnagrams(std::vector<std::string>& strs) {
        std::vector<std::vector<std::string>>ans;
        std::unordered_map<std::string, std::vector<std::string>> myMap;

        for(int i=0; i<strs.size(); i++) {
            std::string s = strs[i];
            std::sort(strs[i].begin(), strs[i].end());
            myMap[strs[i]].push_back(s);
        }
        for (auto i : myMap) {
            ans.push_back(i.second);
        }

        return ans;

    }
};

int main() {
    std::vector<std::string> strs = {"eat","tea","tan","ate","nat","bat"};
    Solution sol;
    std::vector<std::vector<std::string>> res = sol.groupAnagrams(strs);

    for (const auto& group : res) {
        for (const auto& item : group) {
            std::cout << item << " ";
        }
        std::cout<<std::endl;
    }
    return 0;
}
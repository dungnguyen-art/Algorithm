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
// Output: [["bat"],["nat","tan"],["ate","eat","tea"]
use std::collections::HashMap;
use itertools::Itertools;
struct Solution;
impl Solution {
    pub fn group_anagrams(strs: Vec<String>) -> Vec<Vec<String>> {
        let mut ans: Vec<Vec<String>> = Vec::new();
        let mut my_map: HashMap<String, Vec<String>> = HashMap::new();

        for word in strs {
            let sorted_word:String = word.chars().sorted().collect();
            my_map.entry(sorted_word).or_default().push(word); 
        }

        for (_,group) in my_map{
            ans.push(group);
        }
        ans
    }
}

fn main() {
    let strs = vec!["eat".to_string(),"tea".to_string(),"tan".to_string(),"ate".to_string(),"nat".to_string(),"bat".to_string()];
    let result = Solution::group_anagrams(strs);
    println!("{:?}", result);
}
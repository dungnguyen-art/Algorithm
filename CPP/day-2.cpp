// Day 2 - 16/7/2023
// Link: https://leetcode.com/problems/valid-anagram/
// 242. Valid Anagram
// Given two strings s and t, return true if t is an anagram of s, and false otherwise.
// An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase,
// typically using all the original letters exactly once.

#include<iostream>
#include<string>
#include<algorithm>

bool compareTwoString(std::string &s, std::string &t){
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());

    std:: cout << s << " " << t;
    int res =  s.compare(t);
    if (res == 0 )
        return 1;
    else
        return 0;
}
int main() {
    std::string s = "anagram";
    std::string t = "nagaram";
    std::cout << compareTwoString(s,t);
}
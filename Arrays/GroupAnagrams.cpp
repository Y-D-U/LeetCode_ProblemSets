/*
Given an array of strings strs, group the anagrams together. You can return the answer in any order.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

 

Example 1:

Input: strs = ["eat","tea","tan","ate","nat","bat"]
Output: [["bat"],["nat","tan"],["ate","eat","tea"]]
*/





class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>,vector<string>> mp;
        
        for (string s:strs){
            vector<int> arr(26,0);
            for(char c:s){
                arr[c-'a']+=1;
            }
          mp[arr].push_back(s);


            
        }
        vector<vector<string>> v;
        for(auto p:mp){
            v.push_back(p.second);
        }
        return v;
    }
};

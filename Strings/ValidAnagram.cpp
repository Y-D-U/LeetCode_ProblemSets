/* Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.  */


/*Example 1:

Input: s = "anagram", t = "nagaram"
Output: true


Example 2:

Input: s = "rat", t = "car"
Output: false */


//Creating 2 hash tables to track the count and comparing the count values of each character in both the tables




class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        if(s.size()!=t.size()) return false;

        for(int i=0;i<s.size();i++){
            m1[s[i]]+=1;
            m2[t[i]]+=1;
        }
        
        for(auto pt:m1){
            if(m2.find(pt.first)!=m2.end()){
                if(m1[pt.first]!=m2[pt.first]){
                    return false;
                }
            }
            else return false;                
        }
        return true;
    }
};

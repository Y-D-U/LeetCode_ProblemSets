/* Given two strings s and t, determine if they are isomorphic.

Two strings s and t are isomorphic if the characters in s can be replaced to get t.

All occurrences of a character must be replaced with another character while preserving the order of characters. No two characters may map to the same character, but a character may map to itself.

 

Example 1:

Input: s = "egg", t = "add"
Output: true

Example 2:

Input: s = "paper", t = "title"
Output: true */
//Here we are creating 2 dictionaries one for mapping from s to t and other for inverse mapping from t to s
class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char,char>  m;
        for(int i=0;i<s.size();i++){
            if(m.find(s[i])!=m.end()){
                if(m[s[i]]!=t[i]){
                    return false;                    
                }                
            }
            else{
                m[s[i]]=t[i];
            }
        }
        unordered_map<char,char>  mn;
        for(int i=0;i<s.size();i++){
            if(mn.find(t[i])!=m.end()){
                if(mn[t[i]]!=s[i]){
                    return false;                    
                }                
            }
            else{
                mn[t[i]]=s[i];
            }
        }
        return true;        
    }
};

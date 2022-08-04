/*
Maximum Number of Balloons

Given a string text, you want to use the characters of text to form as many instances of the word "balloon" as possible.

You can use each character in text at most once. Return the maximum number of instances that can be formed.

 

Example 1:

Input: text = "nlaebolko"
Output: 1


Example 2:

Input: text = "loonbalxballpoon"
Output: 2 */

class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mp;
        string s="balloon";
        for(char i:s){
           // cout<<i<<endl;
            mp[i]++;
        }
        unordered_map<char,int> cmp;
        for(char i : text){
            cmp[i]++;
        }
        int mn=INT_MAX;
        for(auto i=mp.begin() ;i!=mp.end();++i){
           // cout<<i->first<<" "<<i->second<<endl;
            mn=min(mn,cmp[i->first]/i->second);
            
        }
        return mn;
    }
};

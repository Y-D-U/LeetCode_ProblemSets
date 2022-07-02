/*  Given an array of strings words, return the words that can be typed using letters of the alphabet on only one row of American keyboard like the image below.

In the American keyboard:

the first row consists of the characters "qwertyuiop",
the second row consists of the characters "asdfghjkl", and
the third row consists of the characters "zxcvbnm".   */


/* 
Example 1:

Input: words = ["Hello","Alaska","Dad","Peace"]
Output: ["Alaska","Dad"]


Example 2:

Input: words = ["omk"]
Output: [] */



class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> r1={"QWERTYUIOPqwertyuiop","ASDFGHJKLasdfghjkl","ZXCVBNMzxcvbnm"};
        unordered_map<char,int> m;
        int v=1;
        for(string s:r1){
            for(char c:s){
                m[c]=v;
            }
            v++;
        }
        vector<string> vt;
        for(string s:words){
            int k=0;
            int n=m[s[0]];
            for(char c:s){
                if(m[c]!=n){
                    k=1;
                    break;
                }
            }
            if (!k){
               vt.push_back(s) ;
            }
        }
        return vt;
        
    }
};

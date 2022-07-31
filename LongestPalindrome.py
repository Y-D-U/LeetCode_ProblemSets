"""
Given a string s which consists of lowercase or uppercase letters, return the length of the longest palindrome that can be built with those letters.

Letters are case sensitive, for example, "Aa" is not considered a palindrome here.

 

Example 1:

Input: s = "abccccdd"
Output: 7
Explanation: One longest palindrome that can be built is "dccaccd", whose length is 7.
"""
class Solution:
    def longestPalindrome(self, s: str) -> int:
        d={}
        for c in s:
            if c not in d:
                d[c]=1
            else:
                d[c]+=1
        p=0       
        for i in d:
            
            if d[i]>1:
                if d[i]%2==0:
                    p+=d[i]
                    d[i]=0
                else:
                    p+=d[i]-1
                    d[i]=1
                    
        for i in d:
            if d[i]==1:
                p+=1
                break
        return p

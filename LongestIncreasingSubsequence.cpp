/*
Given an integer array nums, return the length of the longest strictly increasing subsequence.

A subsequence is a sequence that can be derived from an array by deleting some or no elements without changing the order of the remaining elements. 
For example, [3,6,2,7] is a subsequence of the array [0,3,1,6,2,2,7].

 

Example 1:
Input: nums = [10,9,2,5,3,7,101,18]
Output: 4
Explanation: The longest increasing subsequence is [2,3,7,101], therefore the length is 4.


Example 2:
Input: nums = [0,1,0,3,2,3]
Output: 4


Example 3:
Input: nums = [7,7,7,7,7,7,7]
Output: 1 */
class Solution {
public:
    int dp[2501];
    
    int fun(int i,vector<int> &nums){
        if (i==0) return 1;
        if (dp[i]!=-1){
            return dp[i];
        }
        int m=1;        
        for(int j=0; j<=i;j++){            
            if (nums[j]<nums[i]){
                m=max(m, fun(j,nums)+1);
            }
        }
        return dp[i]=m;
    }
    int lengthOfLIS(vector<int>& nums) {
        memset(dp,-1,sizeof(dp));
        int mx=1;
        for(int i=0;i<nums.size();i++){
            mx=max(mx,fun(i,nums));
        }
        return mx;
    }
};

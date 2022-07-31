/* Given an integer array nums, move all the even integers at the beginning of the array followed by all the odd integers.

Return any array that satisfies this condition.

 

Example 1:

Input: nums = [3,1,2,4]
Output: [2,4,3,1]
Explanation: The outputs [4,2,3,1], [2,4,1,3], and [4,2,1,3] would also be accepted.  */



class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int s=nums.size();
        vector<int> v(s);
        int i=0,j=0;
        for(int n:nums){
            if(n%2==0){
                v[i]=n;
                i++;
            }
            else{
                v[s-1-j]=n;
                j++;
            }
        }
        return v;
        
    }
};

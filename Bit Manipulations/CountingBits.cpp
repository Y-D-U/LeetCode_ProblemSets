/*Given an integer n, return an array ans of length n + 1 such that for each i (0 <= i <= n), ans[i] is the number of 1's in the binary representation of i.

 

Example 1:

Input: n = 2
Output: [0,1,1]
Explanation:
0 --> 0
1 --> 1
2 --> 10 */






class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> arr;
        int i=0;
        while(i<=n){
            int ct=0;
            int a=i;
            while(a!=0){
                int c=a&1;
                if(c) ct++;
                a=a>>1;
            }
            i++;
            arr.push_back(ct);
        }
        return arr;
    }
};

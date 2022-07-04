/* You are given a rectangular cake of size h x w and two arrays of integers horizontalCuts and verticalCuts where:

horizontalCuts[i] is the distance from the top of the rectangular cake to the ith horizontal cut and similarly, and
verticalCuts[j] is the distance from the left of the rectangular cake to the jth vertical cut.
Return the maximum area of a piece of cake after you cut at each horizontal and vertical position provided in the arrays horizontalCuts and verticalCuts. 
Since the answer can be a large number, return this modulo 109 + 7.*/
/*
example 1:
Input: h = 5, w = 4, horizontalCuts = [1,2,4], verticalCuts = [1,3]
Output: 4 
Explanation: The figure above represents the given rectangular cake. Red lines are the horizontal and vertical cuts. 
After you cut the cake, the green piece of cake has the maximum area.*/





class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        vector<int> v1;
        vector<int> v2;
        int m1=0,m2=0;
        for(int i=0;i<horizontalCuts.size()-1;i++){
            int c=horizontalCuts[i+1]-horizontalCuts[i];
            v1.push_back(c);  
            if (c>m1) m1=c;
            
        }
        for(int i=0;i<verticalCuts.size()-1;i++){
            int c=verticalCuts[i+1]-verticalCuts[i];
            v2.push_back(c);
            if (c>m2) m2=c;
            
        }
        return (m1 *1LL*  m2)%(1000000000+7);
        
    }
};

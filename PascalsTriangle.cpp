/*Given an integer numRows, return the first numRows of Pascal's triangle.

In Pascal's triangle, each number is the sum of the two numbers directly above it as shown:*/

/*Input: numRows = 5
Output: [[1],[1,1],[1,2,1],[1,3,3,1],[1,4,6,4,1]]*/

/*       1
       1   1
     1   2    1
   1   3    3    1
 1   4    6    4    1
 
 */
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> past={{1}};
        int r=1;
        int c=1;
        while(r<numRows){
            past.push_back(vector<int> {});
            for(int i=0;i<=c;i++){                
                if (i-1<0 || i==past[r-1].size()){
                    past[r].push_back(1);
                }
                else{
                    past[r].push_back(past[r-1][i-1]+past[r-1][i]);                }
            }
            r++;
            c++;     
        }
        return past;        
    }
};

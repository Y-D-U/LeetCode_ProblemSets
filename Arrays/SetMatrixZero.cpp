/*
Given a matrix if an element in the matrix is 0 then you will have to set its entire column and row to 0 and then return the matrix.*/


/*
Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]

Output: [[1,0,1],[0,0,0],[1,0,1]]

Explanation: Since matrix[2][2]=0.Therfore the 2nd column and 2nd row wil be set to 0.
 
Input: matrix=[[0,1,2,0],[3,4,5,2],[1,3,1,5]]

Output:[[0,0,0,0],[0,4,5,0],[0,3,1,0]]

Explanation:Since matrix[0][0]=0 and matrix[0][3]=0. Therefore 1st row, 1st column and 4th column will be set to 0*/
#include <bits/stdc++.h> 
void setZeros(vector<vector<int>> &matrix)
{   
    bool b=false;
    for(int i=0;i<matrix.size();++i){
        if(matrix[i][0]==0) b=true;
        for(int j=1;j<matrix[0].size();++j){
            if(matrix[i][j]==0){
                matrix[0][j]=0;
                matrix[i][0]=0;
            }         
        }
    }
    for(int i=matrix.size()-1;i>=0;--i){
        for(int j=matrix[0].size()-1;j>=1;--j){
            if(matrix[0][j]==0 || matrix[i][0]==0){
                 matrix[i][j]=0;
            }
        }
        if(b) matrix[i][0]=0;
        
    }
     
}

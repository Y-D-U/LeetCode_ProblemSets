/*There are N stones, numbered 1,2,…,N. For each i (1≤i≤N), the height of Stone i is hi

There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N:

If the frog is currently on Stone i, jump to one of the following: Stone i+1,i+2,…,i+K. Here, a cost of ∣hi−hj∣ is incurred, where j is the stone to land on.

Find the minimum possible total cost incurred before the frog reaches Stone N.*/

/*
Example 1
Input:
5 3
10 30 40 50 20
Output:
30

Example 2
Input:
2 100
10 10
Output:
0   
*/



#include<bits/stdc++.h>
using namespace std;

int h[1000];
int dp[1000];



int fun(int n,int k){
  if (n==0) return dp[0]=0;
  if (n==1 )return dp[1]=abs(h[1]-h[0]);
  if (dp[n]!=-1){
    return dp[n];
  }
  int arr[k];
  for(int i=1;i<=k;i++){
      arr[i-1]=fun(n-i,k)+abs(h[n]-h[n-i]);
  }
  return dp[n]=*min_element(arr,arr+k);
}

int main(){
  int n,k;
  cin>>n>>k;

  
  int l=n;
  memset(dp,-1,sizeof(dp));
  while(l--){
    int x;
    cin>>x;
    h[n-1-l]=x;

  }
  cout<<fun(n-1,k);


}

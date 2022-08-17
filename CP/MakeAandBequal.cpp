/*
Chef has two numbers AA and BB.

In one operation, Chef can choose either AA or BB and multiply it by 22.

Determine whether he can make both AA and BB equal after any number (possibly, zero) of moves.
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int a,b;
	while(t--){
	   cin>>a>>b;
	   int mx=max(a,b);
	   int mn=min(a,b);
	   bool b=true;
	   while(mn<=mx){
	       if(mx==mn){
	           cout<<"YES"<<endl;
	           b=false;
	           break;
	       }
	       mn=mn*2;
	       
	   }
	   if(b) cout<<"NO"<<endl;
	  
	}
	return 0;
}

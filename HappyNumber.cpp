/* Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not. */

/* Input: n = 19
Output: true
Explanation:
12 + 92 = 82
82 + 22 = 68
62 + 82 = 100
12 + 02 + 02 = 1 */

/*Implemented by adding the corresponding values to an unordered set and to check if any duplicates would be found, if found that implies that would be an infinite loop 
so the program terminates with a false, else it would end up in a 1 */

class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int> s;
        while(1){
            int sum=0;
            while(n){
                int d=n%10;
                n=n/10;
                sum=sum+d*d;                
            }
            if (sum==1){
                return true;
            }
            else if (s.find(sum)!=s.end()){
                return false;
            }
            else{
                s.insert(sum);
                n=sum;
            }            
        }        
    }
};

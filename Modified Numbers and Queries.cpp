/*
Find the sum of all the numbers between the range l and r. Here each number is represented by the sum of its distinct prime factors. 
Note: For example, 6 is represented by 5 because 6 has two prime factors 2 and 3 and 2 + 3 = 5


Example 1:
Input: l = 1, r = 2
Output: 2
Explanation: 1->0, 2->2 and 0+2=2.
1 has no prime factors.


Example 2:
Input: l = 1, r = 6
Output: 17
Explanation: 1->0, 2->2, 3->3, 4->2
5->5, 6->2+3=5, 0+2+3+2+5+5 = 17. 

Your Task:  
You dont need to read input or print anything. Complete the function sumOfAll() which takes l and r as input parameter and returns sum all the numbers ( as represented ) in the given range both L and R included.

Expected Time Complexity: O(nloglogn)
Expected Auxiliary Space: O(n)

Constraints:
1 <= l <= r <=104

*/


// Solution
class Solution {
  public:
    bool isPrime(int n){
        for(int i=2;i<n;i++){
            if(n%i==0) return 0;
        }
        return 1;
    }
    int primeFactorSum(int n){
        if(n==1) return 1;
        int sum = 0;
        for(int i=2;i<=n;i++){
            if(n%i==0 and isPrime(i)){
                sum += i;
            }
        }
        return sum;
    }
    int sumOfAll(int l, int r){
        // code here
        int sum = 0;
        for(int i=l;i<=r;i++){
            sum += primeFactorSum(i);
        }
        return sum;
    }
};

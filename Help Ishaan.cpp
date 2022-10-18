/*
Ishaan has been given a task by his teacher. 
He needs to find the Nth term of a series. 
His teacher gives him some examples to help him out (Refer examples below). 
He is a bit weak in pattern searching so to help him his teacher told him that the Nth term is related to prime numbers. 
The Nth term is the difference of N and the closest prime number to N. Help him find the Nth term for a given N.


Input: N = 10
Output: 1
Explanation: Closest prime to 10 is 11.

Your Task:
You don't need to read or print anything. Your task is to complete the function NthTerm() which takes N as input paramater and returns Nth term.
*/


// Solution

class Solution {
	public:
	    bool isPrime(int n){
	        for(int i=2;i<n;i++){
	            if(n%i == 0) return false;
	        }
	        return true;
	    }
		int NthTerm(int N){
		    if(N==1) return 1;
		    if(N==0) return 2;
		    if(isPrime(N)) return 0;
		    
		    int a = N+1;
		    while(!isPrime(a)){
		        a++;
		    }
		    
		    int b = N-1;
		    while(!isPrime(b)){
		        b--;
		    }
		    return min(abs(N-a), abs(N-b));
		}

};

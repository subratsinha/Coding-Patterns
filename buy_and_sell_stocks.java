// best time to buy and sell stocks solved through divide and conquer technique
// leetcode 121
import java.util.*;
class Solution {
    public int maxProfit(int[] prices) {
        int high = prices.length-1;
        int low = 0;
        if(low == high)
            return 0;
        int k=0;
        int[] profits = new int[high];
        for(int z =0;z<prices.length-1;z++){
            profits[z] = prices[z+1] - prices[k];
            k++;
        }
       
        int high1 = profits.length-1;
        int maxprofit;
       Solution ob = new Solution();
        maxprofit = ob.findmaxsubarray(profits,low,high1);
        if(maxprofit < 0)
            return 0;
        else
            return maxprofit;
    }
    
    int findmaxsubarray(int[] profits, int low, int high1){
         Solution ob1 = new Solution();
        int leftsum,mid,rightsum,crosssum;
        if (high1 == low){
            return(profits[low]);
        }
        else {
            mid = (low + high1)/2;
            
            leftsum = ob1.findmaxsubarray(profits,low,mid);
            rightsum = ob1.findmaxsubarray(profits,mid+1,high1);
            crosssum = ob1.findmaxcrosssubarray(profits,low,mid,high1);
            
            if (leftsum >= rightsum && leftsum >= crosssum)
                return(leftsum);
            else if(rightsum >= leftsum && rightsum >= crosssum)
                return(rightsum);
            else
                return(crosssum);
        }
    }
    
    int findmaxcrosssubarray(int[] profits,int low,int mid,int high1){
        int leftsum,rightsum,sum;
        leftsum = Integer.MIN_VALUE;
        sum = 0;
        for(int i=mid; i>=low; i--){
            sum = sum+profits[i];
            if (sum > leftsum){
                leftsum = sum;
                
            }
        }
        rightsum = Integer.MIN_VALUE;
        sum = 0;
        for(int j=mid+1;j<=high1;j++){
            sum = sum+profits[j];
            if(sum > rightsum){
                rightsum = sum;
                
            }
        }
        return (leftsum+rightsum);
    }
    
}

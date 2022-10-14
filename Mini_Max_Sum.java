// Hackerrank Question
//Mini-Max Sum
//Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

import java.util.Scanner;
import java.util.Arrays;

class Result {
    public void miniMaxSum(int[] arr) {
        long min, max;
        min = max = 0;
        for (int i = 0; i < arr.length - 1; i++) {
            min = min + arr[i];
        }
        for (int j = 1; j < arr.length; j++) {
            max = max + arr[j];
        }
        System.out.print(min + " " + max);
    }

}

public class Solution {
    public static void main(String[] args) {
        int[] arr = new int[5];
        Scanner sc = new Scanner(System.in);
        for (int i = 0; i < 5; i++) {
            arr[i] = sc.nextInt();
        }
        Arrays.sort(arr);
        Result obj = new Result();
        obj.miniMaxSum(arr);
    }
}

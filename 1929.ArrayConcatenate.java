import java.util.Scanner;
import java.util.Arrays;

public class Solution {
    public static int[] getConcatenation(int[] nums) {
        int[] arr = new int[nums.length * 2];
        for (int i = 0; i < nums.length; i++) {
            arr[i] = nums[i];
        }
        for (int i = (nums.length); i < arr.length; i++) {
            arr[i] = nums[i - nums.length];
        }
        return arr;
    }

    public static void main(String[] args) {
        int a;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        int[] nums = new int[a];
        int[] arr = new int[a * 2];
        arr = getConcatenation(nums);
        System.out.print(Arrays.toString(arr));
    }
}
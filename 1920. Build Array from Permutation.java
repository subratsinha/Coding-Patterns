import java.util.Arrays;
import java.util.Scanner;

public class Solution {
    public static int[] buildArray(int[] nums) {
        int[] arr = new int[nums.length];
        for (int i = 0; i < nums.length; i++) {
            arr[i] = nums[nums[i]];
        }
        return arr;
    }

    public static void main(String[] args) {
        int a;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        int[] nums = new int[a];
        int[] arr = new int[a];
        arr = buildArray(nums);
        System.out.print(Arrays.toString(arr));
    }
}
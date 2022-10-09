import java.util.*;
public class Solid_Parallelogram {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);
        System.out.print("Ente the limit: ");
        int n=sc.nextInt();
        
        for(int i=1; i<=n; i++){
            int s=n-i;
            for(int j=1; j<=s; j++){
                System.out.print("  ");
            }
            for(int j=1; j<=n; j++){
                System.out.print("* ");                
            }
            System.out.println();
        }
    }    
}
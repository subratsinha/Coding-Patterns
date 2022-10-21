gfg link=> https://practice.geeksforgeeks.org/problems/reverse-spiral-form-of-matrix4033/1

static boolean visited[][];

    public int[] reverseSpiral(int R, int C, int[][] a)

    {

        // code here

     visited=new boolean[R][C];

     ArrayList<Integer> al=new ArrayList<>();

     int count=0;

     int i=0,j=0;

     while(count<R*C) {

     //goright

     while(j<C && visited[i][j]==false) {

     visited[i][j]=true;

     al.add(a[i][j]);

     count++;

     j++;

     }

     

     //godown

     i++;

     j--;

     while(i<R && visited[i][j]==false) {

     visited[i][j]=true;

     al.add(a[i][j]);

     i++;

     count++;

     }

     i--;

     j--;

     //goleft

     while(j>-1 && visited[i][j]==false) {

     visited[i][j]=true;

     al.add(a[i][j]);

     j--;

     count++;

     }

     i--;

     j++;

     //gotop

     while(i>-1 && visited[i][j]==false) {

     visited[i][j]=true;

     al.add(a[i][j]);

     i--;

     count++;

     }

     i++;

     j++;

     

     

 

     }

     Collections.reverse(al);

     int []ans=new int [count];

        for(int k=0;k<count;k++)

         ans[k]=al.get(k);

        return ans;

 

    }

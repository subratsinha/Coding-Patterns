//optimized code
public static ArrayList<Integer> findLeastGreater(int n, int[] a) {
        // code here
        ArrayList<Integer>al = new ArrayList<>();
        TreeSet<Integer> treeSet = new TreeSet<>();
        for(int i=n-1;i>=0;i--){
            treeSet.add(a[i]);
            if(treeSet.higher(a[i])==null)al.add(-1); // higher is a method in treeSet ehich is used to return the least element in this set which is strictly greater than the given element element.   
            else{
                al.add(treeSet.higher(a[i]));
            }
        }
        Collections.reverse(al);
        return al;
        
 }

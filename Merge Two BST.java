public List<Integer> merge(Node root1,Node root2){
        // Write your code here
        ArrayList<Integer> al = new ArrayList<>();
        // ArrayList<Integer> al2 = new ArrayList<>();
        
        InOrder(root1,al);
        InOrder(root2,al);
        Collections.sort(al);
        // System.out.println(al);
        return al;
        
    }
    
    void InOrder(Node root,ArrayList<Integer> al){
        if(root == null) return;
        InOrder(root.left,al);
        al.add(root.data);
        InOrder(root.right,al);
    }

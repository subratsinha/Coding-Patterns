boolean isSumTree(Node root){
             // Your code here
             f=true;
             isSumTreeUtil(root);
             return f;
	}
	
	boolean f=false;
	int isSumTreeUtil(Node root){
	    if(root == null) return 0;
	    if(root.left==null && root.right==null) return root.data;
	    if(f==false) return 0;
	    int a= isSumTreeUtil(root.left);
	    int b=isSumTreeUtil(root.right);
	    if(a+b != root.data) f=false;
	    return a+b+root.data;
	}

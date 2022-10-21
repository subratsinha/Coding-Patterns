static String decodedString(String s){
        // code here
        Stack<Integer> num = new Stack<>();
        Stack<String> stack = new Stack<>();
        int i=0;
        while(i<s.length()){
            if(s.charAt(i)>='0' && s.charAt(i)<='9'){
                int n=0;
                while(s.charAt(i)>='0' && s.charAt(i)<='9'){
                    n=n*10+(s.charAt(i)-'0');
                    i++;
                }
                num.push(n);
            }else{
                if(s.charAt(i)==']'){
                    int n = num.pop();
                    StringBuilder insidestr = new StringBuilder();
                    while(!stack.peek().equals("[")){
                        insidestr.append(stack.pop());
                    }
                    stack.pop();
                    StringBuilder newString = new StringBuilder();
                    while(n>0){
                        newString.append(insidestr);
                        n--;
                    }
                    stack.push(newString.toString());
                }else{
                    stack.push(""+s.charAt(i));
                }
                i++;
            }
        }
        StringBuilder sb = new StringBuilder();
        while(stack.size()>0){
            sb.append(stack.pop());
        }
        return sb.reverse().toString();
    }

gfg link => https://practice.geeksforgeeks.org/problems/hamiltonian-path2522/1

int n;
    boolean check(int N, int M, ArrayList<ArrayList<Integer>> Edges) { 
        // code here
        n=N;
        Map<Integer,ArrayList<Integer>> map = new HashMap<>();
        for(ArrayList<Integer> a : Edges){
            int source = a.get(0);
            int destination = a.get(1);
            map.putIfAbsent(source,new ArrayList<>());
            map.putIfAbsent(destination,new ArrayList<>());
            map.get(source).add(destination);
            map.get(destination).add(source);
        }
        Set<Integer> set = new HashSet<>();
        //boolean isVisited[]= new boolean[N+1];
        for(int i=1;i<=N;i++){
            if(dfs(i,set,map)){
                return true;
            }
        }
        return false;
    }

    boolean dfs(int current, Set<Integer> set, Map<Integer,ArrayList<Integer>> map){
        //isVisited[current]=true;
        set.add(current);
        if(set.size()==n){
            return true;
        }
        for(int neighbour : map.get(current)){
            if(!set.contains(neighbour) && dfs(neighbour, set, map)){
                return true;
            }
        }
        set.remove(current);
        return false;
    }

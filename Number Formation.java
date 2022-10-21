gfg link => https://practice.geeksforgeeks.org/problems/number-formation3506/1

public int getSum(int x, int y, int z) {
        // Your code goes here
        if(x==0 && y==0 && z==0){
            return 0;
        }
        int mod = 1000000007;
        long sum[][][]=new long[x+1][y+1][z+1];
        long num[][][]=new long[x+1][y+1][z+1];
        for(int i=0; i<=x;i++){
            for(int j=0; j<=y;j++){
                for(int k=0; k<=z;k++){
                    sum[i][j][k]=0;
                    num[i][j][k]=0;
                }
            }
        }
        long ans = 0L;
        num[0][0][0]=1L;
        for(int i=0;i<=x;++i){
            for(int j=0;j<=y;++j){
                for(int k=0;k<=z;++k){
                    if(i>0){
                    sum[i][j][k]+=(sum[i-1][j][k]*10+4*num[i-1][j][k])%mod;
                    num[i][j][k] += num[i-1][j][k]%mod;
                    }
                    
                    if(j>0){
                        sum[i][j][k] += (sum[i][j-1][k]*10+5*num[i][j-1][k])%mod;
                        num[i][j][k]+=num[i][j-1][k]%mod;
                    }
                    
                    if(k>0){
                        sum[i][j][k]+= (sum[i][j][k-1]*10+6*num[i][j][k-1])%mod;
                        num[i][j][k] += num[i][j][k-1]%mod;
                    }
                    
                    ans += sum[i][j][k]%mod;
                    ans %= mod;
                }
            }
        }
        return (int)ans;
    }

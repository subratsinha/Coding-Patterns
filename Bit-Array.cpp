#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long long n,s,p,q,k;
    int m=1;
    k=pow(2,31);
    cout<<"Enter four numbers: ";
    cin>>n>>s>>p>>q;
    long long l[n+1];
    l[0]=s%k;
    for (int i=1;i<n; i++){
        l[i]=l[i-1]*p+q%k;
        if(l[i]==l[i-1]){
            break;
        }
        m++;
    }
    cout<<"Output: "<<m;
    return 0;
}
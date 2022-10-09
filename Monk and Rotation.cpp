#include<iostream>

using namespace std;

int main(){

	int t,n,r;
	cin>>t;							
	cin>>n;							
	cin>>r;							
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int j=1;
	while(j==r){
		for(int k=0;k<n;k++){
			arr[k+1]=arr[k];
			if(k+1==n){
				arr[k]=arr[0];
			}
		}
		j++;
	}
	for(int l=0;l<n;l++){
		cout<<arr[l];
	}

	return 0;
}

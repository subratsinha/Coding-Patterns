//Abel summation using Functions (1-2+3-4+5-6+7-8+9........and so on)	
	
#include<iostream>

using namespace std;	

int ABEL(int);
 	
	int main(){
		
	int n;
	cout<<"Here we will print the sum of the series 1-2+3-4... upto n terms."<<endl;
	cout<<"Enter the number upto which you want the sum according to this series : ";
	cin>>n;
	ABEL(n);
	return 0;
}

int ABEL(int n){
	int sum=0,diff=0,ans;
	for(int i=1;i<=n;i+=2){
		sum+=i;
	}
	for(int j=2;j<=n;j+=2){
		diff+=j;
	}
	ans=sum-diff;
	cout<<"The sum of this series upto "<<n<<" is : "<<ans;
	return 0;
}

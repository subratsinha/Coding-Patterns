//Factorial Program

#include<iostream>

using namespace std;

int FACT(double);

int main(){
	
	double n,fact;
	cout<<"Enter the number of which you want to calculate factorial : ";
	cin>>n;
	fact = FACT(n);
	cout<<"The factorial of the number is : "<<fact;
	return 0;
}

int FACT(double n){
	double ans=1;
	for(int i=1;i<=n;i++){
		ans*=i;
	}
	return(ans);
}
